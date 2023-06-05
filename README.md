# RH and T sensor
This repository contains codes and insutructions for creating a Relative Humidity (RH) and temperature (T) sensor using Arduino, reading and saving the data using Python. This is a low-cost option with limited precision. The main features of this project are listed below:
* The sampling rate is 0.5 Hz.
* Controller: Arduino
* RH and T sensor: DHT22 or DHT11

## Arduino
The connection of the RH and T sensor (DHT22 or DHT11) is described [here](https://github.com/Aerosol-Lab/RH_T_sensor/tree/main/Arduino).

## Python
We use Python to continuously read the serial monitor and save the data to files for future post-processing. This is described [here](https://github.com/Aerosol-Lab/RH_T_sensor/tree/main/Python)
