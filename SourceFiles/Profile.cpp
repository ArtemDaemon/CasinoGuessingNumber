#include "Profile.h"

/**
 * Function to display object's fields
 */
void Profile::print() {
    std::cout << "Name: " << name << ", Balance: " << balance << "$" << std::endl;
}

/**
 * Getter for 'balance' field
 * @return current balance
 */
unsigned int Profile::getBalance() {
    return balance;
}

/**
 * Function for adding some amount of money to the balance
 * @param money amount on money
 */
void Profile::addBalance(unsigned int money) {
    balance += money;
}

/**
 * Function for subtracting some amount of money from the balance
 * @param money amount on money
 */
void Profile::subtractBalance(unsigned int money) {
    balance -= money;
}