//
// Created by Steph on 24/8/2020.
//

#ifndef LAB04_SOLID_EMPRESA_H
#define LAB04_SOLID_EMPRESA_H
#include "Game.h"
#include <sstream>
#include "Ticket.h"
#include <vector>

using namespace std;
class Empresa{
private:
    Game *game;
    Ticket * ticket;
    string name;
    vector<Game*>gameList;
    vector<Ticket*>ticketList;

public:
    Empresa();
    Empresa(Ticket *);
    void setName(string);
    string getName();
    Ticket* getTicket();
    Game* getGame();
    void addGame(Game*);
    void addTicket(Ticket*);
    string getListTickets();

    ~Empresa();


};


#endif //LAB04_SOLID_EMPRESA_H
