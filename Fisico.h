//
// Created by mendo on 24/8/2020.
//

#ifndef LAB04_SOLID_FISICO_H
#define LAB04_SOLID_FISICO_H

#include <iostream>
#include <string>
#include "Game.h"

using namespace std;

class Fisico: public Game{
private:
    double itemWeight;
    string productDimensions;
public:

    Fisico(string, double , double, double, string);
    ~Fisico();

};


#endif //LAB04_SOLID_FISICO_H
