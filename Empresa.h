//
// Created by Steph on 24/8/2020.
//

#ifndef LAB04_SOLID_EMPRESA_H
#define LAB04_SOLID_EMPRESA_H
#include "Game.h"
#include <sstream>
#include "Ticket.h"

using namespace std;
class Empresa{
private:
    Game *game;
    Ticket * ticket;
    string name;


public:
    Empresa();
    void setName(string);
    string getName();
    string toString();


    ~Empresa();


};


#endif //LAB04_SOLID_EMPRESA_H
