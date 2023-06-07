# Arduino

Follow the instructions of [Dejan Nedelkovski](https://howtomechatronics.com/tutorials/arduino/dht11-dht22-sensors-temperature-and-humidity-tutorial-using-arduino/) to connect the DHT22 sensor to the Arduino board.

Connect your Arduino board to the computer. Then, open the Arduion_IDE software and open the code "RH-sensor.ino". Modify this code according to your needs. Subsequently, install the library [DHTLib](https://playground.arduino.cc/Main/DHTLib/). Here you can either download the "DHTlib.zip" provided here or download it from  https://playground.arduino.cc/Main/DHTLib/. To install this library go to "Sketch" then "Include Library" and then click on "Add .ZIP library..." and select the file "DHTlib.zip".

**Note:** The type of sensor will determine the function used in Arduino. Use the function read22() and read11() for DHT22 and DHT11 sensors, respectively.


After DHTLib library is installed, upload this code to your Arduino board. Here, you may open the serial monitor to verify that data is being acquired.
