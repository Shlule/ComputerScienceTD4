// TownExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"City.h"
#include"Resolver.h"
int main()
{
    // je creer dans un premier temps toutes mes villes
    City A("A");
    City B("B");
    City C("C");
    City D("D");
    City E("E");

    //ensuite je creer les routes pour mes villes

    A.addRoads("B", 2);
    A.addRoads("C", 2);

    B.addRoads("A", 2);
    B.addRoads("C", 3);
    B.addRoads("D", 3);
    B.addRoads("E", 1);

    C.addRoads("A", 2);
    C.addRoads("B", 3);
    C.addRoads("D", 1);
    C.addRoads("E", 3);

    D.addRoads("B", 3);
    D.addRoads("C", 1);
    D.addRoads("E", 3);
    
    E.addRoads("B", 1);
    E.addRoads("C", 3);
    E.addRoads("D", 3);

    // je creer ma carte sur laquelle mon resolver va travailler
    std::vector<City> map;
    map.emplace_back(A);
    map.emplace_back(B);
    map.emplace_back(C);
    map.emplace_back(D);
    map.emplace_back(E);

    //je creer un itineraire
    std::vector<City> itineraire{ A,B,C,D,E };

    //je creer un resolver
    Resolver resolver;

    // je demande au resolver de resoudre le problem
    resolver.findShortestWay(itineraire, map);


    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
