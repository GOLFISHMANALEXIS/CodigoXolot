# Xolotcocotron 2023

Es un animatrónico inspirado en 3 cosas:
- Un Xoloitzcuintles
- En un alebrije
- En los pueblos prehispánicos y el Mictlán

## Índice

- [Piezas](#Piezas)
  - [Tarjetas](#Tarjetas)
  - [Motores](#Motores)
  - [Cámara de humo](#Cámara-de-humo)
  - [Actuador Lineal](#Actuador-Lineal)
  - [Circuito Controlador de Motores](#Circuito-Controlador-de-Motores)
- [Uso y control](#Uso-y-control)
  - [Detección de Objetos](#Detección-de-Objetos)
  - [Movimiento Simulado de Caminar](#Movimiento-Simulado-de-Caminar)
  - [Movimiento de Alas](#Movimiento-de-Alas)
  - [Control de la Dirección con el Joystick](#Control-de-la-Dirección-con-el-Joystick)
  - [Restablecimiento de Posición](#Restablecimiento-de-Posición)
- [Mesa Rotatoria](#Mesa-Rotatoria)
  - [Materiales necesarios](#Materiales-necesarios)
  - [Preparación de los círculos de madera](#Preparación-de-los-círculos-de-madera)
  - [Preparación del eje o valero](#Preparación-del-eje-o-valero)
  - [Instalación de la polea y la correa](#Instalación-de-la-polea-y-la-correa)
  - [Añadir la manivela](#Añadir-la-manivela)
  - [Pruebas y ajustes](#Pruebas-y-ajustes)
- [Decoración y Efectos Especiales](#Decoración-y-Efectos-Especiales)
  - [Diseño de Alebrije Tradicional](#Diseño-de-Alebrije-Tradicional)
  - [Cambio de Luz UV Prehispánico](#Cambio-de-Luz-UV-Prehispánico)
  - [Pintura Acrílica y Plumón de Tinta Invisible Casera](#Pintura-Acrílica-y-Plumón-de-Tinta-Invisible-Casera)
- [Caracterización de los Integrantes](#Caracterización-de-los-Integrantes)
  - [Mujeres](#Mujeres)
  - [Hombres](#Hombres)
- [Historia](#Historia)
  - [Xoloitzcuintles: Guardianes de Almas en la Mitología Prehispánica](#Xoloitzcuintles)
  - [Historia y Creencias](#Historia-y-Creencias)
  - [La Misión de los Xolos](#La-Misión-de-los-Xolos)
  - [Asociación con Xolotl](#Asociación-con-Xolotl)
  - [El Significado de su Color](#El-Significado-de-su-Color)
  - [Legado y Respeto](#Legado-y-Respeto)
- [Integrantes del equipo](#Integrantes)
- [Asesor del equipo](#Asesor)
- [Referencias](#Referencias)

---

## Piezas

### Tarjetas

- Arduino Mega 2560 Rev3
- Arduino Uno Rev3

### Motores

- 4 servomotores
- 1 motor a pasos con el driver ULN2003A
- 1 motor de corriente directa tipo Faulhaber
- Jumpers macho/macho y macho/hembra (aproximadamente 50)
- 1 sensor ultrasónico SRF04
- 1 pulsador
- Un joystick
- Transistor 2N2222A
- Potenciómetro de 50k
- Resistencia 1kΩ
- Fuente de alimentación 5v-3.3v

### Cámara de humo

- Resistencia de hilo de nicrom
- Ficha de doble empalme
- Un ventilador de 5v
- Una fuente de alimentación de 5v con un eliminador

### Actuador Lineal

- Un motoreductor 5v
- Un tubo de PVC de 5 cm de diámetro
- Un tubo de PVC de 1.5 cm
- Un espárrago de 1/4
- Una tuerca de 1/4

### Circuito Controlador de Motores

- IC L293D
- Fuente de poder de 5v
- Resistencias de 1k (2)
- Pulsadores (2)
- Cables
- Se puede utilizar para cualquier tipo de motor de corriente directa
 <p align="center">
  <img src="movimientodemotoresizqder.png" width="400" />
</p>
<p align="center">
  <i>Esquemático</i>
</p>

---

## Uso y control

### Detección de Objetos

- Utiliza el sensor ultrasónico para detectar objetos o usuarios en las proximidades del dispositivo.

### Movimiento Simulado de Caminar

- Cuando el sensor ultrasónico se activa, los 4 servos entran en acción simultáneamente, moviéndose en direcciones opuestas para simular un paso adelante o atrás. Esto crea la ilusión de que el dispositivo está caminando.

### Movimiento de Alas

- Además del movimiento simulado de caminar, el proyecto incorpora un mecanismo de alas que utiliza un sistema de engranajes y un motor DC. Este mecanismo de alas se sincroniza con el movimiento de caminar para simular un movimiento realista, permitiendo que el dispositivo imite el vuelo de un ave u otro patrón de movimiento de alas deseado.

 <p align="center">
  <img src="golfishman21-regegulador-de-voltaje-e-5v-cocotron-2023.png" width="400" />
</p>
<p align="center">
  <i>Esquemático</i>
</p>


### Control de la Dirección con el Joystick

- Además de los movimientos mencionados anteriormente, el proyecto emplea un motor a pasos y un joystick para controlar la dirección. Los usuarios pueden girar el joystick para cambiar la dirección del movimiento y dirigir el dispositivo hacia donde deseen.

### Restablecimiento de Posición

- Al finalizar las acciones mencionadas, el pulsador se utiliza para volver a la posición inicial, es decir, 0°, tanto para los 4 motores como para el mecanismo de alas. Esto asegura que el dispositivo regrese a su estado de reposo después de completar las acciones.

---

# Mesa Rotatoria

## Materiales necesarios:
- Dos círculos de madera comprimida con el diámetro deseado para la base y la parte superior de la mesa.
- Eje o valero que permitirá la rotación de la parte superior de la mesa.
- Polea y correa para transmitir el movimiento de la manivela al eje.
- Manivela a la medida que permitirá girar la mesa.
- Tornillos y herramientas para ensamblar las piezas.

## Preparación de los círculos de madera:
1. Corta dos círculos de madera comprimida del tamaño deseado para la base y la parte superior de la mesa.
2. Asegúrate de que ambos círculos estén perfectamente nivelados y lisos para facilitar el movimiento de la mesa.

## Preparación del eje o valero:
- Fija el eje o valero en el centro de la base de la mesa, asegurándote de que esté correctamente alineado y asegurado para permitir la rotación.
- Asegura el eje o valero con tornillos para que esté firmemente sujeto a la base.

## Instalación de la polea y la correa:
- Coloca una polea en el extremo del eje o valero que sobresale de la base.
- Coloca la correa alrededor de la polea y la manivela que utilizarás para girar la mesa.

## Añadir la manivela:
- Fija la manivela en el extremo de la correa para permitir el giro de la mesa.
- Asegura la manivela de manera que sea fácilmente accesible para el operador y permita un giro suave de la mesa.

## Pruebas y ajustes:
- Realiza pruebas para asegurarte de que la mesa gire suavemente y que la manivela funcione correctamente.
- Realiza ajustes si es necesario para garantizar un movimiento fluido y seguro de la mesa rotatoria.

 <p align="center">
  <img src="planos.png" width="350" />
</p>
<p align="center">
  <i>Planos</i>
</p>


## Decoración y Efectos Especiales

### Diseño de Alebrije Tradicional

- Para resaltar la influencia de los alebrijes en el diseño, el animatrónico se decorará con un diseño de alebrije tradicional. Esta colorida y detallada decoración reflejará la tradición artesanal y la creatividad de la cultura mexicana.

### Cambio de Luz UV Prehispánico

- Se incorporará un efecto de cambio de luz utilizando luz ultravioleta (UV) que resalta elementos prehispánicos en la decoración. Cuando se activa la luz UV emitida por el foco incandescente de neón, se revelarán diseños y patrones prehispánicos ocultos en el animatrónico, añadiendo un toque místico y cultural a la presentación.

### Pintura Acrílica y Plumón de Tinta Invisible Casera

- La pintura acrílica se utilizará para realzar los detalles y las texturas del animatrónico. Además, se empleará un plumón de tinta invisible casera que se hará visible solo bajo la luz UV, permitiendo ocultar mensajes o diseños secretos que se revelarán durante la iluminación con luz ultravioleta.

---

## Caracterización de los Integrantes

### Mujeres

- Opción de usar falda náhuatl
- Huipil (blusa)

### Hombres

- Calzón de manta (pantalón y camisa)


 <p align="center">
  <img src="tipicotraje.jpg" width="250" />
</p>
<p align="center">
  <i>Representacion</i>
</p>

---

## Historia

### Xoloitzcuintles

Guardianes de Almas en la Mitología Prehispánica

Este texto explora la fascinante historia de los Xoloitzcuintles, una raza de perros venerada desde tiempos prehispánicos en la mitología y la cultura mexicana.

### Historia y Creencias

En la creencia prehispánica, se consideraba que estos hermosos animales eran guardianes de los espíritus, encargados de guiar a las almas de los fallecidos en su travesía por Mictlán, la ciudad de los muertos.

### La Misión de los Xolos

La función más importante que se creía que cumplían los Xoloitzcuintles era ayudar a las almas a cruzar un profundo y caudaloso río que atravesaba la tierra de los muertos. Sin embargo, su ayuda no era garantizada.

- Si una persona había tratado mal a los animales, especialmente a los perros, el Xolo se negaría a ayudar, condenando al alma al sufrimiento eterno.
- Si, en cambio, alguien había sido amable y respetuoso con los perros en vida, el Xolo aceptaría la tarea con gusto, llevando el alma a salvo al otro lado.

### Asociación con Xolotl

Los Xoloitzcuintles no solo eran valorados en el mundo espiritual, sino también en vida, ya que estaban asociados con Xolotl, el dios de la muerte. La relación con este dios era importante para asegurar una muerte sin sufrimiento.

### El Significado de su Color

Según la leyenda, el color del Xolo era significativo:

- Xolos negros habían completado su deber espiritual, habiendo guiado suficientes almas, y ya no podían realizar esta tarea.
- Xolos blancos o muy claros eran considerados jóvenes e inexpertos, por lo que no se les permitía llevar a cabo la travesía.
- Los Xolos grises jaspeados, el color más común en ellos, eran los elegidos para la importante tarea de guiar las almas.

<p align="center">
  <img src="DALL·E 2023-09-01 17.46.53 - a more dominant face of an aztec dog.png" width="250" />
</p>
<p align="center">
  <i>AI DALLE</i>
</p>

### Legado y Respeto

Este relato nos muestra cómo nuestros antepasados nos transmitieron, a través de la cultura y la tradición, el amor y el respeto por estos hermosos animales que se han convertido en una parte fundamental de nuestras vidas, acompañándonos tanto en vida como en muerte.

## Integrantes

- **Alexis Villegas Alvarado**
- **Ali Michel Lopez Anselmo**
- **Gisell del Carmen Luna Gasca**
- **Fátima Jocelyn Márquez Buendía**
- **Angel Gabriel Basilio Franco**

## Asesor

- **Jose David Rivera Garcia**



## Referencias

1. Arduino. (s.f.). Arduino - Home. [https://www.arduino.cc/](https://www.arduino.cc/)
2. Texas Instruments. (s.f.). L293, L293D Quadruple Half-H Drivers. [http://www.ti.com/lit/ds/symlink/l293.pdf](http://www.ti.com/lit/ds/symlink/l293.pdf)
3. National Aeronautics and Space Administration. (s.f.). Solar System Exploration - Faulhaber Motor. [https://solarsystem.nasa.gov/people/516/faulhaber-motor/](https://solarsystem.nasa.gov/people/516/faulhaber-motor/)
4. SRF04 Ultrasonic Range Sensor. (s.f.). [https://www.electronicwings.com/nodemcu/srf04-ultrasonic-range-sensor-interfacing-with-nodemcu](https://www.electronicwings.com/nodemcu/srf04-ultrasonic-range-sensor-interfacing-with-nodemcu)
5. Spice, R. (2021). Understanding and Implementing the L293D H-Bridge Motor Driver. *Circuit Digest*. [https://circuitdigest.com/electronic-circuits/l293d-h-bridge-motor-driver-working-applications](https://circuitdigest.com/electronic-circuits/l293d-h-bridge-motor-driver-working-applications)
6. Universidad de Deusto. (s.f.). El uso de las cámaras oscuras en educación. [https://www.deusto-publicaciones.es/deusto/pdfs/lineadepub/LineaPub_solicituddoc.pdf](https://www.deusto-publicaciones.es/deusto/pdfs/lineadepub/LineaPub_solicituddoc.pdf)
7. Cocotron Team (2023). Circuito controlador de motores [Video corto]. YouTube. [https://www.youtube.com/shorts/cAEhopGSDuE](https://www.youtube.com/shorts/cAEhopGSDuE)
8. Unbox Factory (Año). Actuador Lineal PLOcowiAyscEazkB1Ve5aX_ptNiDTz4OAm [Video]. YouTube. [https://www.youtube.com/watch?v=PLOcowiAyscEazkB1Ve5aX_ptNiDTz4OAm](https://www.youtube.com/watch?v=PLOcowiAyscEazkB1Ve5aX_ptNiDTz4OAm)
9. Gob.mx (s.f.). La leyenda del Xoloitzcuintle, el perro azteca. Gobierno de México. [https://www.gob.mx/siap/articulos/la-leyenda-del-xoloitzcuintle-el-perro-azteca?idiom=es#:~:text=Esta%20particular%20raza%20de%20perros,la%20ciudad%20de%20los%20muertos.](https://www.gob.mx/siap/articulos/la-leyenda-del-xoloitzcuintle-el-perro-azteca?idiom=es#:~:text=Esta%20particular%20raza%20de%20perros,la%20ciudad%20de%20los%20muertos.)
10. Engineering Today (Año). Alas mecanismo basado [Video]. YouTube. [https://www.youtube.com/watch?v=JXcxoOECj8k](https://www.youtube.com/watch?v=JXcxoOECj8k)

---
 <p align="center">
  <img src="logobuap.png" width="300" />
</p>
<p align="center">
  <i>Prepa BUAP CRS</i>
</p>
