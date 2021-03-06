/**
 * @ Single- Sensor de temperatura LM35
 * @ Description: Performs scale temperature reading Celsius, Fahrenheit and Kelvin
 *
 * @ Characteristics
 * - Temperature Maximum: 150 ° C
 * - Temperature Low: -55 ° C
 * - Temperature Heating: + - 00:08 ºC
 * - Voltagemde operation: 4V to 30V
 * - Operating amperage: 60μ ampere (0.000060).
 * 
 * @ Developer by RodriguesFAS
 * @ Date: 24 de setember de 2015
 * @ Version: 1.0.0
 * @ License: MIT
 * @ Web site: <https://rodriguesfas.github.io>
 * @ Email: franciscosouzaacer@gmail.com
 */

// Import library
#include <LM35.h>

/**
 * Instantiate an object with LM35 sensor name, passing the parameter is the pin where it is connected to the Arduino.
 */
LM35 sensor(A0);

void setup(){
	// Serial monitor
	Serial.begin(9600);
}

void loop() {
	/**
	 * Instantiate a variable for each value to be stored, it can be the integer or real type, which receives the sensor
	 * object, which calls the method that will read the sensor in a certain corresponding scale.
	 */
	int celsius = sensor.readCelsius();
	int fahrenheit = sensor.readFahrenheit();
	int kelvin = sensor.readKelvin();

	// Print (show) values on the screen (serial monitor).
	Serial.print("Temperature: ");
	Serial.print(celsius);
	Serial.println("C");
	
	Serial.print("Temperature: ");
	Serial.print(fahrenheit);
	Serial.println("F");

	Serial.print("Temperature: ");
	Serial.print(kelvin);
	Serial.println("K");

	Serial.println("-----------------------");

	delay(1000); // wait a second to print values again.
}