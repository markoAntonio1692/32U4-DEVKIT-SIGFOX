# 32U4 DEVKIT SIGOX 

## 32U4 DEVKIT SIGOX  IMAGEN

![](https://github.com/markoAntonio1692/32U4-DEVKIT-SIGFOX/blob/master/image/1.JPG )
![](https://github.com/markoAntonio1692/32U4-DEVKIT-SIGFOX/blob/master/image/2.JPG)


## Caracteristicas

- Placa de desarrollo basado en el chip Atmega32U4 USB y Modem Wisol RC4 para aplicaciones Sigfox.
- Programable con Arduino IDE (compatible con pines de arduino Leonardo, ProMicro, Micro, y otras placas arduino basadas en chip 32U4).
- Incluye una antena helicoidal omnidireccional de 2.5 DBi y opcionalmente un conector  ULF para antenas externas. (previamente desoladar la antena helicoidal para su uso). 
- Puede alimentarse directamente de una fuente USB, circuito interno trabaja a 3.3V.
- Ideal para desarrollar prototipos y aplicaciones de forma rapida ya que incluye un microcotrolador compatible con arduino.
- Cuenta con un regulador de voltaje de 3.3V AMS1117 que puede suministar hasta 1 amperio de corriente.
- Diseño compacto, seguro y de bajo consumo, ya que incorpora tan solo un chip microcontrolador y el modem Wisol RC4.
- Comunicacion serial por Hardware  (Pin Tx  RX -Serial1 arduino) dedicado para comunicacion con modem Wisol.
- Pin Reset de modulo Wisol Conectado al Pin "12" arduino. 
- Incorpora un Boton de reset y Boton adicional 13 de proposito general programable en el pin "13" arduino
- Pines Digitales, Analogicos, PWM, comunicacion SPI, I2C, Serial.
- informacion acerca de arduino leonardo: 
`<link>` : <https://store.arduino.cc/usa/leonardo>


## Caracteristicas Electricas

| Descripciom | Unidad                    |
| ------------- | ------------------------------ |
| Voltaje Minimo  RAW |  3.7 Voltios    |  
| Voltaje Maximo  RAW |  9 Voltios    |  
| Voltaje  alimentacion VCC |  3.3 Voltios    | 
| Corriente maxima   | 1A     |
| Antena helicoidad    | 2.5DBi      |


## Descripcion de pines

![](https://github.com/markoAntonio1692/32U4-DEVKIT-SIGFOX/blob/master/image/PINOUT.JPG)


# Cargar un Programa a ESP8266 DEVKIT LOW POWER
- Alimente a la placa ESP8266 DEVKIT LOW POWER por VIN.
- Coloque un Jumper entre los pin Heder "SW", o puede usar un switch externo si lo necesita.

![](https://github.com/markoAntonio1692/ESP8266-LOW-POWER-DEVKIT/blob/master/Imagenes/vin.jpg)
- Utilice un Conversor UBS A Serial TTL como FTDI, CH340, CP210x, etc. Conectelo de la forma correspondiente. 
- Cambie el Jumper a la posicion que se muestra en la imagen y reinicie a ESP8266 LOW POWER DEVKIT con el boton RST, esta accion pondra a la esp8266 en modo programacion
![](https://github.com/markoAntonio1692/ESP8266-LOW-POWER-DEVKIT/blob/master/Imagenes/serial.jpg)

- Conecte a su PC su Conversor UBS A Serial TTL, espere que sea reconocido por los drivers.
- Abra su ide Arduino.
- Selecciones un ejemplo.
- Selecciones su puerto COM que fue detectado.
- Seleciones la Placa Nodemcu 1.0 y Cargue!
 (Si no tiene instalado la placa esp8266 en Ide Arduino se recomienda usar los Siguientes pasos)
`<link>` : <https://www.luisllamas.es/programar-esp8266-con-el-ide-de-arduino/>

![](https://github.com/markoAntonio1692/ESP8266-LOW-POWER-DEVKIT/blob/master/Imagenes/arduinocom.jpg)

![](https://github.com/markoAntonio1692/ESP8266-LOW-POWER-DEVKIT/blob/master/Imagenes/arduino.jpg)

![](https://github.com/markoAntonio1692/ESP8266-LOW-POWER-DEVKIT/blob/master/Imagenes/arduinoprog.jpg)

- Una vez cargado el Sketch a su ESP8266 LOW POWER DEVKIT Cambie la posicion del Jumper a su estado inicial y nuevamente reinicie con el boton reset, el esp8266 arrancara con su el sketch cargado.

## Transitor Mosfet N en pin D8 (D8/DOP) 
-  Use este transistor para activar cargas de un maximo de 250 mA, con una salida de 1 logico o HIGH, enciende la carga, con 0 o LOW apaga a la carga.

![](https://github.com/markoAntonio1692/ESP8266-LOW-POWER-DEVKIT/blob/master/Imagenes/mosfet.jpg)




