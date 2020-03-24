// 
//    FILE: dht11.h
// VERSION: 0.4.1
// PURPOSE: DHT11 Temperature & Humidity Sensor library for Arduino
// LICENSE: GPL v3 (http://www.gnu.org/licenses/gpl.html)
//
// DATASHEET: http://www.micro4you.com/files/sensor/DHT11.pdf
//
//     URL: http://playground.arduino.cc/Main/DHT11Lib
//
// HISTORY:
// George Hadjikyriacou - Original version
// see dht.cpp file
// 

#ifndef dht11_h
#define dht11_h

#if defined(ARDUINO) && (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#define DHT11LIB_VERSION "0.4.1"

#define DHTLIB_OK				0
#define DHTLIB_ERROR_CHECKSUM	-1
#define DHTLIB_ERROR_TIMEOUT	-2

class dht11
{
public:
	int humidity_01;
	int humidity_02;
	int temperature_01;
	int temperature_02;
	int checksum;

    int read(int pin);
    bool checksum_is_valid() const;
};
#endif
