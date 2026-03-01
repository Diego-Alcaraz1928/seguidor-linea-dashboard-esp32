 Sistema de monitoreo y calibración de sensores QTR con ESP32 y Node-RED

## Descripción
Sistema que adquiere datos de sensores de reflectancia QTR usando ESP32, transmite los datos mediante MQTT y los visualiza en un dashboard en Node-RED.

## Hardware
- ESP32
- 2 Sensores QTR
- WiFi
- PC con Node-RED

## Frecuencia de muestreo
10 muestras por segundo

## Formato de datos
SEQ,TIMESTAMP,HORA,SENSOR_IZQ,SENSOR_DER

## Dashboard
Node-RED Dashboard

## Requisitos
- Arduino IDE
- Node-RED
- Broker MQTT
