#ifndef GAME_H
#define GAME_H

#pragma once
#include <string>
#include <iostream>
#include "Cards.h"
#include "Bank.h"

class Game {
private:
    bool isRunning;
    std::string title;

public:
    // Konstruktor
    Game(bool kisRunning, std::string ktitle);

    void setRunning(bool newRunning);

    bool getRunning();

    int start();

    void highCard(Cards& cards, Bank& bank);

    void showBank(Bank& bank);
};

#endif