#include "Profile.h"

/**
 * Function to display object's fields
 */
void Profile::print() {
    std::cout << "Name: " << name << ", Balance: " << balance << "$" << std::endl;
}

/**
 * Function for adding some amount of money to the balance
 * @param money amount on money
 */
void Profile::addBalance(unsigned int money) {
    balance += money;
}