# Inspiration
KittyBeep was created as an attempt to curb my one-month-old kitten's need to go under the couch and do her business there while no one was watching. This device will be of tremendous use to distraught pet owners everywhere who are tired of crawling under dusty furniture.

# What it does
KittyBeep is a fairly simple deal. The ultrasonic sensors can accurately measure the distance to any object within it's range, and the buzzer is triggered whenever anything crosses over into closer proximity. This limit is programmed in KittyBeep to be 40 cms, but the sensor is capable of much larger numbers. Owing to the conical nature of the sensors range, it is advised to keep the device at an angle/at a corner in your soon to be kitten-free space.

# How I built it
The materials required for this project include:

An Arduino UNO R3. - I have used a cloned one for this project.
A mini breadboard
an HC-SR04 ultrasonic sensor. ( This is one of the cheapest and readily available ultrasonic sensors available.)
An active piezo-buzzer.
Jumper cables
Standard Issue Cat, ( 1. Nos, preferably fed and purring to content.)
a 9v battery.
An UNO expansion board/shield.

# Challenges I ran into
Owing to the fact that the Arduino board I had used was a cloned one, its USB drivers and firmware were somewhat messed up. Setting up the board in order to program it proved a tad bit tedious as a result.
Kittens have sharp claws.

# What I learned
I had learned Arduino right from scratch for KittyBeep, and was excited to find a simple and robust application for the parts I had readily in hand. This project got me exploring through all the parts and code one might use to create this sort of stuff,

# How can KittyBeep be improved?
Movement sensors, (Ultrasonic, Infra-red, etc.) will prove useful for all kinds of monitoring systems for pets and toddlers. An alternate "mode" for this device could be created where it counts the number of times the kitten has passed in front of it. This can possibly work as a kitten litter-box usage counter. Implementing a WiFi module could unlock the endless realm of wireless possibilities, and I am keen to explore and see whether this can even be expanded to more complex software including mobile apps and the likes.
