#include "Bank.h"

Bank::Bank(int startMoney) {
    money = startMoney;
}

void Bank::addMoney(int amount) {
    money += amount;
}

void Bank::substractMoney(int amount) {
    money -= amount;
}

int Bank::getMoney() {
    return money;
}

int Bank::betMoney() {
    int bet;
    std::cout << "Einsatz: ";
    std::cin >> bet;
    return bet;
}