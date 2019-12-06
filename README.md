# 32U4 DEVKIT SIGFOX 

## 32U4 DEVKIT SIGFOX  IMAGEN

![](https://github.com/markoAntonio1692/32U4-DEVKIT-SIGFOX/blob/master/image/1.JPG )


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

| DescripcioN | Unidad                    |
| ------------- | ------------------------------ |
| Voltaje Minimo  RAW |  3.7 Voltios    |  
| Voltaje Maximo  RAW |  9 Voltios    |  
| Voltaje  alimentacion VCC |  3.3 Voltios    | 
| Corriente maxima   | 1A     |
| Antena helicoidal    | 2.5DBi      |


## Descripcion de pines 32U4 DEVKIT SIGFOX

![](https://github.com/markoAntonio1692/32U4-DEVKIT-SIGFOX/blob/master/image/PINOUT.png)


# Cargar un Programa a 32U4 DEVKIT SIGFOX
- Conecte el conector micro usb a 32U4 DEVKIT SIGFOC y LUEGO enchufar el cable usb a su PC
- Espere a que su PC lo reconosca.
- Abra su ide Arduino.
- Puede usar este ejemplo como inicio:

#### Comuncacion Serial chip wisol y arduino

```javascript
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() {
   while (Serial.available()) {
    Serial1.write(Serial.read());
  }
  while (Serial1.available()) {
    Serial.write(Serial1.read());
  }
  
}
```


- Selecciones la placa Arduino Leonardo y seleccion el puerto COM detectado en su PC.

![](https://github.com/markoAntonio1692/32U4-DEVKIT-SIGFOX/blob/master/image/arduino.jpg)


- Una vez cargado el sketch abra la terminal serial a 9600 baudios, seleccionar la npcion "Nueva línea".
- Escribir el comando "AT",presionar  enter, y a continuacion el chip wisol respondera con un "Ok"  
- Comando de interes:
  ID:          AT$I=10
  PAC:         AT$I=12
  Voltaje:     AT$V?
  Temperatura: AT$T?



![](https://github.com/markoAntonio1692/32U4-DEVKIT-SIGFOX/blob/master/image/AT.JPG)
