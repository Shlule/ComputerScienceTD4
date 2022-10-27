#include "City.h"
using namespace std;

City::City(string nameP)
:name {nameP} {}

void City::addRoads(string endCityP, int distanceP) {
	roads.emplace_back(Connection(distanceP, name, endCityP));
}