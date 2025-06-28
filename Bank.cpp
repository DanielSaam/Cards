#include "Bank.h"

Bank::Bank(int startMoney) {
    money = startMoney;
}

void Bank::addMoney(int amount) {
    money += amount;
}

int Bank::getMoney() {
    return money;
}