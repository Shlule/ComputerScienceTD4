#include "Resolver.h"
using namespace std;

void Resolver::findShortestWay(vector<City> itineraireP, vector<City> mapP) {
	int distance{ 0 };
	// i take the first city in itineraire as start point
	City currentCity = itineraireP[0];
	// i check all road of the city and take the first that go to one of our destination
	vector<Connection> currentCityConnections = currentCity.getRoads();
	for (size_t i = 0; i < currentCityConnections.size(); i++) {
		string temp = currentCityConnections[i].getEnd();
		int found  = std::find_if(itineraireP.begin())

	}
	//if there are not i take the shortest roads
	//i do tahat on all city
	// i finish when my itineraire list is empty


}