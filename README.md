# Adns-3050-Optical-Sensor
Library and Eagle cad files for the Adns-3050 Sensor

Overview



Setup

Wiring

Software
A method has been provided to automate the setup of the sensor. It does not require as much setup as the adns-9800 laser based sensor. The default setup method (startup) uses all the default configuration options for the sensor but they can be changed easily. All configuration is done by writing to the correct registers on the sensor, a quick look over the datasheet should help anyone looking to change some settings, the write method can be used to write to the settings to the registers.  







Using to obtain postion

Once the startup method has been run it is easy to obtain the position of the sensor, just use getx() and gety() consecutivley, it is import that there are no read operations btween the two otherwise the data will be corrupted or changed.  



Any questions or comments feel free to email me at twigg1012@gmail.com
