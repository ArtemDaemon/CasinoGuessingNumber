#include "functions.h"
#include "Profile.h"

int main() {
    //int secretNumber = getSecretNumber(0, 10);
    //int userNumber = getUserInt();
    //checkGuess(secretNumber, userNumber);
    //Profile profile("Артём", 1000);    
    //profile.print();
    unsigned int userNumber = getUnsignedInt();
    std::cout << "Your number is... " << userNumber << std::endl;
    return 0;
}