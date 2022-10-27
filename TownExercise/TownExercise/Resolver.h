#pragma once
#include<vector>
#include"Connection.h"
#include"City.h"
class Resolver
{
public:
	void findShortestWay(std::vector<City> itineraireP, std::vector<City> mapP);
	

private:
	std::vector<std::string> itineraire{};
	std::vector<City> map{};
};

