#pragma once
#include<iostream>
#include"Connection.h"
#include<vector>


class City
{
public:
	City(std::string nameP);

	std::string getName() { return name; }
	std::vector<Connection> getRoads() { return roads; }
	void addRoads(std::string endCityP, int distanceP);

private:
	std::string name;
	std::vector<Connection> roads;
};

