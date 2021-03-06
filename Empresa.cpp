

#include "Empresa.h"

Empresa::Empresa(){name="Sin Definir", game= NULL, ticket =NULL;}

Empresa::Empresa(Ticket *ticket)
{
  this->ticket=ticket;
}


void Empresa::setName(string name){this->name=name;}
string Empresa::getName() {return name;}

Ticket * Empresa::getTicket()
{
   return ticket;
}

Game * Empresa::getGame() {return game;}

void Empresa::addGame(Game* game)
{
    gameList.push_back(game);
}

void Empresa::addTicket(Ticket* ticket)
{
    ticketList.push_back(ticket);
}

string Empresa::getListTickets()
{
    stringstream s;
    for(int i=0; i< ticketList.size();i++)
    {
        s<<ticketList[i]->toString()<<endl;
    }
    return s.str();
}


Empresa::~Empresa(){}