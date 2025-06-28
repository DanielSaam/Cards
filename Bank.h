#ifndef BANK_H
#define BANK_H

class Bank {
private:
    int money;

public:
    Bank(int startMoney);

    void addMoney(int amount);
    int getMoney();

};

#endif