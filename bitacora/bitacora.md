# Bitácora de Desarrollo del Sistema de Estacionamiento Inteligente

## Avance 1 – Análisis y planificación

Se realizó el análisis general del sistema de estacionamiento inteligente, definiendo su funcionamiento y los objetivos principales. Se estableció que el ESP32 sería el encargado de leer sensores y enviar la información mediante el protocolo MQTT. También se investigaron los requerimientos de hardware y software necesarios.

## Avance 2 – Configuración del entorno

Se instaló y configuró el entorno de desarrollo en Visual Studio Code utilizando PlatformIO. Se agregaron las librerías necesarias para el funcionamiento del ESP32, la conexión WiFi y la comunicación MQTT. Se verificó que el entorno funcionara correctamente mediante pruebas de compilación.

## Avance 3 – Conexión del ESP32 a WiFi

Se desarrolló el código necesario para conectar el ESP32 a la red WiFi. Se realizaron pruebas para verificar que el dispositivo se conectara correctamente y mantuviera una conexión estable.

## Avance 4 – Implementación de la comunicación MQTT

Se configuró el ESP32 para conectarse al broker MQTT. Se programó el envío de mensajes y la suscripción a topics, permitiendo la comunicación entre el ESP32 y el sistema central.

## Avance 5 – Integración de sensores

Se conectaron los sensores al ESP32 y se desarrolló el código necesario para leer su estado. Se verificó que el microcontrolador detectara correctamente los cambios en los sensores.

## Avance 6 – Envío de datos al sistema

Se integró la lectura de sensores con la comunicación MQTT, permitiendo que el ESP32 enviara el estado de los espacios de estacionamiento en tiempo real al broker.

## Avance 7 – Pruebas de funcionamiento

Se realizaron pruebas para verificar que todo el sistema funcionara correctamente, desde la detección del sensor hasta el envío de datos. Se comprobó que la información se transmitiera correctamente.

## Avance 8 – Corrección y optimización

Se corrigieron errores detectados durante las pruebas y se mejoró la estructura del código. Se implementó la reconexión automática para asegurar el funcionamiento continuo del sistema.

## Avance 9 – Verificación final

Se realizaron pruebas finales para asegurar que el sistema funcionara de forma estable. Se confirmó que el ESP32 podía detectar los estados y enviar la información correctamente.

---

# Resultado

Se logró desarrollar un sistema funcional capaz de detectar el estado de los espacios de estacionamiento y transmitir la información mediante el ESP32 utilizando el protocolo MQTT.
