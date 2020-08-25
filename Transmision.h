//
// Created by mendo on 24/8/2020.
//

#ifndef LAB04_SOLID_TRANSMISION_H
#define LAB04_SOLID_TRANSMISION_H

#include "Game.h"
#include <iostream>
#include <string>

using namespace std;

class Transmision: public Game{

public:
    Transmision(string, double, double);
    ~Transmision();
    string reemplazo();
  //  virtual std::string toString();
};


#endif //LAB04_SOLID_TRANSMISION_H
