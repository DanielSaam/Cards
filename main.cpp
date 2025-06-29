#include <iostream>
#include "Game.h"
#include "Cards.h"
#include "Bank.h"
using namespace std;


// Objekte der Klassen werden erstellt
// IsRunning, Titel
Game game(true, "Game of Cards");
Cards cards;
Bank bank(1000);

int main() {

    // Mainloop
    while (game.getRunning()) {
        
        // SPIEL wird ausgewählt
        switch(game.start()) {
            // High Card
            case 1: {
                game.highCard(cards, bank);
                break;
            }

            // Black Jack
            case 2: {
                game.blackJack(cards, bank);
                break;
            }
            
            // Poker
            case 3: {
                break;
            }

            // Bank
            case 9: {
                game.showBank(bank);
                break;
            }

            default: {
                game.setRunning(false);
                break;
            }
        }
        cout << endl;
    }


    return 0;
}