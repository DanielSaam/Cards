#include "Game.h"

// Game Klasse wird definiert
// Konstruktor
Game::Game(bool kisRunning, std::string ktitle) {
    isRunning = kisRunning;
    title = ktitle;
}

void Game::setRunning(bool newRunning) {
    isRunning = newRunning;
}

bool Game::getRunning() {
    return isRunning;
}

// Spielereingabe Spielwahl
int Game::start() {
    int input;
    std::cout << "-" << title << "-" << std::endl;
    std::cout << "1. High Card" << std::endl;
    std::cout << "2. Black Jack" << std::endl;
    std::cout << "3. Poker" << std::endl;
    std::cout << "9. Bank" << std::endl;
    std::cout << "0. Beenden" << std::endl;
    std::cout << "Eingabe:\t";
    std::cin >> input;
    return input;
}

// SPIELE
// Spiel HIGHCARD
void Game::highCard(Cards& cards, Bank& bank) {
    int bet;
    std::cout << std::endl;
    std::cout << "Kontostand: " << bank.getMoney() << "$" << std::endl;
    bet = bank.betMoney();
    cards.clearHand();
    cards.clearCompHand();
    cards.addCard(cards.createCard(1), cards.createCard(2));
    cards.addCompCard(cards.createCard(1), cards.createCard(2));
    std::cout << "Hand:\t\t";
    cards.showCards();
    std::cout << "Dealer:\t\t";
    cards.showCompCards();

    if(cards.cardNumber(true) > cards.cardNumber(false)) {
        std::cout << "Spieler gewinnt mit ";
        cards.showCards();
        bank.addMoney(bet);
        std::cout << "Kontostand: " << bank.getMoney() << "$" << std::endl;
    } else if (cards.cardNumber(true) < cards.cardNumber(false)) {
        std::cout << "Dealer gewinnt mit ";
        cards.showCompCards();
        bank.substractMoney(bet);
        std::cout << "Kontostand: " << bank.getMoney() << "$" << std::endl;
    } else if (cards.cardNumber(true) == cards.cardNumber(false)) {
        std::cout << "Gleichstand. Niemand gewinnt." << std::endl;
        std::cout << "Kontostand: " << bank.getMoney() << "$" << std::endl;
    }
}

void Game::showBank(Bank& bank) {
    std::cout << "Kontostand: " << bank.getMoney() << "$" << std::endl;
}