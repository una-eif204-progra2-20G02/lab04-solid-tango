//
// Created by Steph on 24/8/2020.
//

#ifndef LAB04_SOLID_TICKET_H
#define LAB04_SOLID_TICKET_H
#include "Game.h"
#include <sstream>

using namespace std;
class Ticket {

private:
    string nombreCliente;
    Game *game;

public:
    Ticket (Game * , string nombreCliente);
    string getNombreCliente();
    void setNombreCliente(string);
    string toString();

};


#endif //LAB04_SOLID_TICKET_H
