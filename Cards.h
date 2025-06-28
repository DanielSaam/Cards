#ifndef CARDS_H
#define CARDS_H

#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <random>

// CARDS KLASSE
class Cards {
private:
    struct Card {
        std::string color;
        std::string type;
    };
    std::vector<Card> hand;
    std::vector<Card> comphand;

public:
    // Konstruktor
    Cards();

    // Spielerhand
    void addCard(std::string cardColor, std::string cardType);

    // Computerhand
    void addCompCard(std::string cardColor, std::string cardType) ;

    // Spielerhand zeigen
    void showCards();

    // Computerhand zeigen
    void showCompCards();

    // Random Generator für die Karten
    int createRandomNumber(int min, int max);

    // Karten werden erstellt
    std::string createCard(int type);

    // Hand leeren
    void clearHand();

    void clearCompHand();

    // Karten zurückgeben
    int cardNumber(bool player);
};

#endif