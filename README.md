
# Adns-3050-Optical-Sensor
Library and Eagle cad files for the Adns-3050 Sensor

Overview

The ADNS 3050 is an entry level gaming sensor with up to 2000cpi resolution. It uses 6 wires to communicate via SPI(including Power) and can be used to create your own computer mouse in addition to other uses in robotics. 


Setup

Wiring
The pins used in the program are defined at the top of the header file.

MOSI -- MOSI, 

MISO -- MISO, 

SCLK -- SCLK, 

NCS -- 3 (any pin you want)


Software

A method has been provided to automate the setup of the sensor. It does not require as much setup as the adns-9800 laser based sensor. The default setup method (startup) uses all the default configuration options for the sensor but they can be changed easily. All configuration is done by writing to the correct registers on the sensor, a quick look over the datasheet should help anyone looking to change some settings, the write method can be used to write to the settings to the registers.  




Using to obtain postion

Once the startup method has been run it is easy to obtain the position of the sensor, just use getx() and gety() consecutively, it is important that there are no read operations between the two otherwise the data will be corrupted or changed.  


Sensor Operation

The ADNS 3050 is essentially a small camera. It takes consecutive photos and the DSP mathematically determines the amount of movement between pictures. The data is then stored in the DELTA_X and DELTA_Y registers (0X03 and 0X04 respectively) Once the the registers are read they are re-written with new data.

Setting the Resolution 

Resolution is determined by the value of bits 4-2 in the MOUSE_CNTRL register (0x0d). By default this is set to 1000 cpi. To change the resolution just write to the register with the corresponding value . For example, to set the resolution to 2000 cpi  just use:

Write(0x0d,B11000);

This sets bits 4-2 to 110 and bits 1 and 0 to 0 (needed for operation).  110 corresponds with the value found on page 29 of the datasheet for a resolution of 2000 



Any questions or comments feel free to email me at twigg1012@gmail.com
