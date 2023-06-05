# RH_T_sensor
This repository contains codes and insutructions for creating a Relative Humidity (RH) and temperature (T) sensor using Arduino, reading and saving the data using Python. This is a low-cost option with limited precision. The main features of this project are listed below:
* The sampling rate is 0.5 Hz.
* Controller: Arduino
* RH and T sensor: DHT22

## Arduino
The connection of the RH and T sensor (DHT22) is based on the work of [Dejan Nedelkovski](https://howtomechatronics.com/tutorials/arduino/dht11-dht22-sensors-temperature-and-humidity-tutorial-using-arduino/).

## Python
We use Python to read the serial monitor and save the data to files for future post-processing.
