#include "Profile.h"

/**
 * Function to display object's fields
 */
void Profile::print() {
    std::cout << "Name: " << name << ", Balance: " << balance << "$" << std::endl;
}


void Profile::addBalance(int money) {
    if(money < 0) throw std::invalid_argument("The amount to add to the balance cannot be negative!");
    balance += money;
}