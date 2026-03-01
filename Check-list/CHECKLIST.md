# Checklist de Reproducibilidad del Sistema ESP32 + QTR + Node-RED

Este checklist permite ejecutar el sistema completo desde cero y obtener los mismos resultados.

---

## 1. Requisitos de Hardware

- [ ] ESP32 funcional
- [ ] 2 sensores QTR
- [ ] Conexión USB para programación
- [ ] Computadora con conexión WiFi
- [ ] Red WiFi disponible

---

## 2. Requisitos de Software

- [ ] Node-RED instalado
- [ ] Broker MQTT (Mosquitto o Node-RED)
- [ ] Navegador web
- [ ] Código fuente del ESP32

---

## 3. Configuración del ESP32

- [ ] Abrir archivo firmware/esp32_qtr_mqtt.ino
- [ ] Configurar SSID y contraseña WiFi
- [ ] Configurar IP del broker MQTT
- [ ] Cargar código al ESP32
- [ ] Verificar conexión en Monitor Serial

Resultado esperado:
ESP32 conectado a WiFi y MQTT.

---

## 4. Configuración de Node-RED

- [ ] Abrir Node-RED
- [ ] Importar archivo node-red/flow.json
- [ ] Verificar nodo MQTT configurado
- [ ] Presionar Deploy
- [ ] Abrir Dashboard

Resultado esperado:
Dashboard visible y funcionando.

---

## 5. Verificación de recepción de datos

- [ ] Verificar que los sensores envían datos
- [ ] Verificar que el dashboard muestra gráficas
- [ ] Verificar que los valores cambian al mover el sensor

Resultado esperado:
Visualización en tiempo real funcional.

---

## 6. Calibración

- [ ] Colocar sensor sobre superficie blanca
- [ ] Presionar botón CALIBRAR BLANCO
- [ ] Colocar sensor sobre superficie negra
- [ ] Presionar botón CALIBRAR NEGRO
- [ ] Verificar valores min, max y umbral

Resultado esperado:
Calibración correcta.

---

## 7. Registro de datos

- [ ] Ejecutar sistema durante varios segundos
- [ ] Verificar archivo CSV en carpeta /data
- [ ] Confirmar mínimo 300 muestras

Resultado esperado:
Archivo CSV generado correctamente.

---

## Resultado final esperado

Sistema completamente funcional con:

- Recepción de datos
- Visualización en dashboard
- Calibración funcional
- Registro en CSV
- Pipeline reproducible
