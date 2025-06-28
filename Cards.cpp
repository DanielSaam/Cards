#include "Cards.h"

// Cards Klasse wird definiert
// Konstruktor
Cards::Cards() {

}

// Spielerhand
void Cards::addCard(std::string cardColor, std::string cardType) {
    hand.push_back({cardColor, cardType});
}

// Computerhand
void Cards::addCompCard(std::string cardColor, std::string cardType) {
    comphand.push_back({cardColor, cardType});
}

// Spielerhand zeigen
void Cards::showCards() {
    for(const auto& playercard : hand) {
        std::cout << playercard.color << " " << playercard.type << "\t";
    }
    std::cout << std::endl;
}

// Computerhand zeigen
void Cards::showCompCards() {
    for(const auto& compcard : comphand) {
        std::cout << compcard.color << " " << compcard.type << "\t";
    }
    std::cout << std::endl;
}

// Random Generator für die Karten
int Cards::createRandomNumber(int min, int max) {
    static std::random_device rd;
    static std::mt19937 generator(rd());
    std::uniform_int_distribution<int> verteilung(min, max);
    return verteilung(generator);
}

// Karten werden erstellt
std::string Cards::createCard(int type) {
        
        // Color
        switch(type) {

            case 1: {
                int randomColor = createRandomNumber(1, 4);
                switch(randomColor) {
                    case 1:
                    return "Herz";
                    break;

                    case 2:
                    return "Karo";
                    break;

                    case 3:
                    return "Pik";
                    break;

                    case 4:
                    return "Kreuz";
                    break;
                }
                break;
            }

            // Type
            case 2: {
                int randomType = createRandomNumber(1, 13);

                switch(randomType) {
                    case 1:
                    return "Ass";
                    break;

                    case 2:
                    return "Zwei";
                    break;

                    case 3:
                    return "Drei";
                    break;

                    case 4:
                    return "Vier";
                    break;

                    case 5:
                    return "Fuenf";
                    break;

                    case 6:
                    return "Sechs";
                    break;

                    case 7:
                    return "Sieben";
                    break;

                    case 8:
                    return "Acht";
                    break;

                    case 9:
                    return "Neun";
                    break;

                    case 10:
                    return "Zehn";
                    break;

                    case 11:
                    return "Bube";
                    break;

                    case 12:
                    return "Dame";
                    break;

                    case 13:
                    return "Koenig";
                    break;
                }
                break;
            }
        }
        return "0";
    }

void Cards::clearHand() {
    hand.clear();
}

void Cards::clearCompHand() {
    comphand.clear();
}

int Cards::cardNumber(bool player) {
    if(player) {
        for(const auto& playercard : hand) {
            if(playercard.type == "Ass") {
                return 14;
            }
            if(playercard.type == "Zwei") {
                return 2;
            }
            if(playercard.type == "Drei") {
                return 3;
            }
            if(playercard.type == "Vier") {
                return 4;
            }
            if(playercard.type == "Fuenf") {
                return 5;
            }
            if(playercard.type == "Sechs") {
                return 6;
            }
            if(playercard.type == "Sieben") {
                return 7;
            }
            if(playercard.type == "Acht") {
                return 8;
            }
            if(playercard.type == "Neun") {
                return 9;
            }
            if(playercard.type == "Zehn") {
                return 10;
            }
            if(playercard.type == "Bube") {
                return 11;
            }
            if(playercard.type == "Dame") {
                return 12;
            }
            if(playercard.type == "Koenig") {
                return 13;
            }
        }
    }
    if(!player) {
        for(const auto& compcard : comphand) {
            if(compcard.type == "Ass") {
                return 14;
            }
            if(compcard.type == "Zwei") {
                return 2;
            }
            if(compcard.type == "Drei") {
                return 3;
            }
            if(compcard.type == "Vier") {
                return 4;
            }
            if(compcard.type == "Fuenf") {
                return 5;
            }
            if(compcard.type == "Sechs") {
                return 6;
            }
            if(compcard.type == "Sieben") {
                return 7;
            }
            if(compcard.type == "Acht") {
                return 8;
            }
            if(compcard.type == "Neun") {
                return 9;
            }
            if(compcard.type == "Zehn") {
                return 10;
            }
            if(compcard.type == "Bube") {
                return 11;
            }
            if(compcard.type == "Dame") {
                return 12;
            }
            if(compcard.type == "Koenig") {
                return 13;
            }
        }
    }
    return 0;
}