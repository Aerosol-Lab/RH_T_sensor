/*  DHT11/ DHT22 Sensor Temperature and Humidity Tutorial
 *  Based on: Dejan Nedelkovski,
 *  https://howtomechatronics.com/tutorials/arduino/dht11-dht22-sensors-temperature-and-humidity-tutorial-using-arduino/
 */

#include <dht.h>

#define dataPin_ch 8  // Pin number of sensor inside chamber
#define dataPin_amb 9 // Pin number of sensor out of chamber
dht DHT; // Creates a DHT object

void setup() {
  Serial.begin(9600);
}
void loop() {
  int readData = DHT.read22(dataPin_ch); // Reads the data from the sensor
  float T = DHT.temperature; // Gets the values of the temperature
  float RH = DHT.humidity; // Gets the values of the relative humidity

  int readData_amb = DHT.read22(dataPin_amb); // Reads the data from the sensor
  float T_amb = DHT.temperature; // Gets the values of the temperature
  float RH_amb = DHT.humidity; // Gets the values of the relative humidity
  
  // Printing the results on the serial monitor
  Serial.print("T Chamber = ");
  Serial.print(T);
  Serial.print(" *C ");
  Serial.print("    RH Chamber = ");
  Serial.print(RH);
  Serial.print(" % ");

  Serial.print("; T Ambient = ");
  Serial.print(T_amb);
  Serial.print(" *C ");
  Serial.print("    RH Ambient = ");
  Serial.print(RH_amb);
  Serial.println(" % ");
  
  delay(2000); // Delays 2 secods, as the DHT22 sampling rate is 0.5Hz
}
