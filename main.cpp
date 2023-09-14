#include "functions.h"
#include "Profile.h"

int main() {
    //int secretNumber = getSecretNumber(0, 10);
    //int userNumber = getUserInt();
    //checkGuess(secretNumber, userNumber);
    Profile profile("Артём", 1000);
    try
    {
        profile.addBalance(-100);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    profile.print();
    return 0;
}