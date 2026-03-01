#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "0.0";
const char* password = "House123";
const char* mqtt_server = "192.168.0.3";
const int mqtt_port = 1928;   // ← AQUI ESTA EL PUERTO

WiFiClient espClient;
PubSubClient client(espClient);

// -------- Pines --------
#define QTR_IZQ 32
#define QTR_DER 35

unsigned long seq = 0;

// -------- Conectar WiFi --------
void conectarWiFi()
{
  Serial.println("=================================");
  Serial.println("Conectando a WiFi...");
  Serial.print("SSID: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  int intentos = 0;

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
    intentos++;

    if (intentos > 40)
    {
      Serial.println("\nReintentando conexion WiFi...");
      WiFi.disconnect();
      WiFi.begin(ssid, password);
      intentos = 0;
    }
  }

  Serial.println("\nWiFi CONECTADO");
  Serial.print("IP asignada: ");
  Serial.println(WiFi.localIP());

  Serial.println("=================================");
}

// -------- Conectar MQTT --------
void conectarMQTT()
{
  Serial.println("Conectando a MQTT...");
  Serial.print("Servidor: ");
  Serial.println(mqtt_server);
  Serial.print("Puerto: ");
  Serial.println(mqtt_port);

  while (!client.connected())
  {
    Serial.print("Intentando conexion MQTT... ");

    if (client.connect("ESP32_QTR"))
    {
      Serial.println("CONECTADO");
    }
    else
    {
      Serial.print("FALLO, rc=");
      Serial.print(client.state());
      Serial.println(" intentando de nuevo en 2 segundos");
      delay(2000);
    }
  }

  Serial.println("=================================");
}

// -------- Setup --------
void setup()
{
  Serial.begin(115200);

  delay(1000);

  Serial.println("\nINICIANDO SISTEMA ESP32 QTR");

  analogReadResolution(12);

  conectarWiFi();

  client.setServer(mqtt_server, mqtt_port);

  conectarMQTT();
}

// -------- Loop --------
void loop()
{
  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.println("WiFi desconectado, reconectando...");
    conectarWiFi();
  }

  if (!client.connected())
  {
    conectarMQTT();
  }

  client.loop();

  int izq = analogRead(QTR_IZQ);
  int der = analogRead(QTR_DER);

  unsigned long timestamp = millis();

  char msg[100];

  sprintf(msg,"%lu,%lu,%d,%d",
          seq,
          timestamp,
          izq,
          der);

  client.publish("robot/qtr", msg);

  Serial.print("Enviado: ");
  Serial.println(msg);

  seq++;

  delay(500);
}
