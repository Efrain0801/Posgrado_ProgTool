## Usamos el micro controlador ESP32
##
# Importamos los modulos
from machine import Pin
from utime import sleep

# Asignamos
led_verde = Pin(2, Pin.OUT)
led_amarillo = Pin(13, Pin.OUT)
led_rojo = Pin(14, Pin.OUT)


### Comenzar a programar
while True:
    led_verde.value(1)
    print("Led verde encendido")
    sleep(4)
    led_verde.value(0)
    print("Led verde apagado")
    sleep(2)

    led_amarillo.value(1)
    print("Led amarillo encendido")
    sleep(2)
    led_amarillo.value(0)
    print("Led amarillo apagado")
    sleep(2)

    led_rojo.value(1)
    print("Led rojo encendido")
    sleep(4)
    led_rojo.value(0)
    print("Led rojo apagado")
    sleep(2)

## Detener con Ctrl+c
