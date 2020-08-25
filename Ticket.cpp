//
// Created by Steph on 24/8/2020.
//

#include "Ticket.h"

Ticket::Ticket(Game * game, string nombreCliente)
{
    this->nombreCliente = nombreCliente;
    this->game = game;
}

void Ticket::setNombreCliente(string nombreCliente)
{this->nombreCliente = nombreCliente;}

string Ticket::getNombreCliente(){return nombreCliente;}

string Ticket::toString()
{
    stringstream x;

    x<<"Nombre Cliente:"<<nombreCliente;
    x<<"Producto: "<<game->toString()<<endl;

    return x.str();
}


