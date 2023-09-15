#include "functions.h"
#include "Profile.h"

int main() {
    Profile profile("Артём", 1000);
    profile.addBalance(100);    
    profile.print();
    return 0;
}