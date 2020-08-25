//
// Created by mendo on 24/8/2020.
//

#include "StreamingGame.h"

StreamingGame::StreamingGame(string nombre, double precio, double tax): Game(nombre, precio, tax) {}
StreamingGame::~StreamingGame() {}

string StreamingGame::reemplazo() {
    return " Este producto tendra un reemplazo ";
}