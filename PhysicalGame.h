//
// Created by mendo on 24/8/2020.
//

#ifndef LAB04_SOLID_PHYSICALGAME_H
#define LAB04_SOLID_PHYSICALGAME_H

#include <iostream>
#include <string>
#include "Game.h"

using namespace std;

class PhysicalGame: public Game{
private:
    double itemWeight;
    string productDimensions;
public:

    PhysicalGame(string, double , double, double, string);
    ~PhysicalGame();
    string envio();
    virtual string toString();


};


#endif //LAB04_SOLID_PHYSICALGAME_H
