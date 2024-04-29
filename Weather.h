#pragma once
#include <string>

class Weather
{
private:
	std::string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100

public:
	inline Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds) :
		city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {};

	inline std::string getWeather() {
		return this->city + ": " + std::to_string(this->lon) + " lon, " + std::to_string(this->lat) + " lat.\n" +
			std::to_string(this->temperature) + "C " + this->weather + " " + std::to_string(this->windSpeed) + "m/s " + std::to_string(this->clouds) + "clouds.\n";
	};
};