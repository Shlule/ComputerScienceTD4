#pragma once
#include<string>

class Connection
{
public:

	Connection(int distanceP,std::string startP,std::string endP);

	int getDistance() { return distance; }
	std::string getEnd() { return end; }
private:
	int distance;
	std::string start;
	std::string end;
};

