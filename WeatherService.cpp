#include <iostream>
#include "Weather.h"
#include "XmlService.h"
#include "JsonService.h"

int main()
{
	setlocale(LC_ALL, "RU");
	Weather w = XmlService().getWeather("../weather.xml");
	std::cout << w.getWeather() << "\n\n";
	Weather w2 = JsonService().getWeather("../weather.json");
	std::cout << w2.getWeather();
}