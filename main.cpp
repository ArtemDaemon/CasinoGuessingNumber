#include "functions.h"
#include "Profile.h"

int main() {
    Profile profile("Артём", 1000);
    profile.subtractBalance(100);    
    std::cout << profile.getBalance() << std::endl;
    return 0;
}