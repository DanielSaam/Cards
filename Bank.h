#ifndef BANK_H
#define BANK_H

#pragma once
#include <iostream>

class Bank {
private:
    int money;

public:
    Bank(int startMoney);

    void addMoney(int amount);
    void substractMoney(int amount);
    int getMoney();
    int betMoney();

};

#endif