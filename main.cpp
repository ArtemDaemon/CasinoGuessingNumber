#include "functions.h"
#include "Profile.h"

const int menuExit = 0;
const int menuProfile = 1;
const int menuGame = 2;
const int menuProfileAdd = 1;
const int menuProfileSubtract = 2;

const unsigned int defaultProfileMoney = 1000;

int main() {
    std::cout << "/////////////////////////////////////////////////////////" << std::endl;
    std::cout << "Welcome to our casino, mate!" << std::endl;
    std::cout << "/////////////////////////////////////////////////////////\n" << std::endl;

    std::cout << "Please enter your name..." << std::endl;
    std::string profileName;
    std::cin >> profileName;
    Profile profile(profileName, defaultProfileMoney);
    profile.print();

    unsigned int menuInput = 1;
    while(menuInput != menuExit) {
        std::cout << "\nChoose some option:" << std::endl;
        std::cout << "1 -- Profile settings" << std::endl;
        std::cout << "2 -- Play game" << std::endl;
        std::cout << "0 -- Exit\n" << std::endl;
        menuInput = getUnsignedInt();

        switch (menuInput) {
            case menuExit:
                std::cout << "Goodbye!" << std::endl;
                break;
            
            case menuProfile: {
                unsigned int menuProfileInput = 1;
                while(menuProfileInput != menuExit) {
                    unsigned int newMoney;

                    profile.print();
                    std::cout << "\nChoose some option:" << std::endl;
                    std::cout << "1 -- Add money to the balance" << std::endl;
                    std::cout << "2 -- Cash money from the balance" << std::endl;
                    std::cout << "0 -- Back\n" << std::endl;
                    menuProfileInput = getUnsignedInt();

                    switch (menuProfileInput) {
                        case menuExit:
                            break;
                        
                        case menuProfileAdd:
                            std::cout << "Enter amount of money..." << std::endl;
                            newMoney = getUnsignedInt();
                            profile.addBalance(newMoney);
                            break;

                        case menuProfileSubtract:
                            std::cout << "Enter amount of money..." << std::endl;
                            newMoney = getUnsignedInt();
                            if(profile.getBalance() >= newMoney) profile.subtractBalance(newMoney);
                            else std::cout << "You don't have enough money for that operation" << std::endl;
                            break;

                        default:
                            std::cout << "There's no such a menu item!" << std::endl;
                            break;
                    }
                }
            }
            break;

            case menuGame: {
                unsigned int menuGameInput = 1;
                while(menuGameInput != menuExit) {
                    unsigned int secretNumber;
                    unsigned int userNumber;
                    unsigned int bet;

                    profile.print();

                    std::cout << "\nChoose the difficulty level:" << std::endl;
                    std::cout << "1 -- From 1 to 10. X2 if winning" << std::endl;
                    std::cout << "2 -- From 1 to 20. X4 if winning" << std::endl;
                    std::cout << "3 -- From 1 to 40. X8 if winning" << std::endl;
                    std::cout << "4 -- From 1 to 60. X16 if winning" << std::endl;
                    std::cout << "5 -- From 1 to 120. X32 if winning" << std::endl;
                    std::cout << "0 -- Back\n" << std::endl;
                    menuGameInput = getUnsignedInt();

                    if(menuGameInput >= 1 && menuGameInput <= 5) {
                        std::cout << "What's your bet?" << std::endl;
                        bet = getUnsignedInt();
                        while (profile.getBalance() < bet)
                        {
                            std::cout << "You don't have enough money for that operation!" << std::endl;
                            bet = getUnsignedInt();
                        }
                        profile.subtractBalance(bet);
                    }

                    switch (menuGameInput) {
                        case 0:
                            break;
                        
                        case 1:
                            std::cout << "Generating number..." << std::endl;
                            secretNumber = getSecretNumber(1, 10);
                            std::cout << "Now's your turn" << std::endl;
                            userNumber = getUnsignedInt();
                            if(checkGuess(secretNumber, userNumber)) profile.addBalance(bet * 2);
                            break;

                        case 2:
                            std::cout << "Generating number..." << std::endl;
                            secretNumber = getSecretNumber(1, 20);
                            std::cout << "Now's your turn" << std::endl;
                            userNumber = getUnsignedInt();
                            if(checkGuess(secretNumber, userNumber)) profile.addBalance(bet * 4);
                            break;

                        case 3:
                            std::cout << "Generating number..." << std::endl;
                            secretNumber = getSecretNumber(1, 40);
                            std::cout << "Now's your turn" << std::endl;
                            userNumber = getUnsignedInt();
                            if(checkGuess(secretNumber, userNumber)) profile.addBalance(bet * 8);
                            break;

                        case 4:
                            std::cout << "Generating number..." << std::endl;
                            secretNumber = getSecretNumber(1, 60);
                            std::cout << "Now's your turn" << std::endl;
                            userNumber = getUnsignedInt();
                            if(checkGuess(secretNumber, userNumber)) profile.addBalance(bet * 16);
                            break;

                        case 5:
                            std::cout << "Generating number..." << std::endl;
                            secretNumber = getSecretNumber(0, 120);
                            std::cout << "Now's your turn" << std::endl;
                            userNumber = getUnsignedInt();
                            if(checkGuess(secretNumber, userNumber)) profile.addBalance(bet * 16);
                            break;

                        default:
                            std::cout << "There's no such a menu item!" << std::endl;
                            break;
                    }
                }
            }
            break;

            default:
                std::cout << "There's no such a menu item!" << std::endl;
                break;
        }
    }
    return 0;
}