#include "functions.h"

/**
 * Function to generate random int from min to max
 * @param min minimum value of the generated number
 * @param max maximum value of the generated number
 * @return generated number in range from min to max
 */
int getSecretNumber(int min, int max) {
    std::random_device device;
    std::mt19937 rng(device());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(rng);
}

/**
 * Function for getting an unsigned integer from use input
 * @return unsigned integer
 */
unsigned int getUnsignedInt() {
    std::string userInput;
    unsigned int resultNumber;

    std::cin >> userInput;

    while(!isUnsignedInt(userInput, resultNumber)) {
        std::cout << "Bad entry! Enter an unsigned number" << std::endl;
        std::cin >> userInput;
    }

    return resultNumber;
}

/**
 * Function for validating if user input is unsigned integer. If it is resultNumber get that value by reference
 * @param input user input
 * @param resultNumber reference of output unsigned integer value
 * @return is user input an unsigned integer value
 */
bool isUnsignedInt(const std::string& input, unsigned int& resultNumber) {
    int tempInt;
    if(isInt(input, tempInt) && tempInt >= 0) {
        resultNumber = tempInt;
        return true;
    }
    return false;
}

/**
 * Function for validating if user input is integer. If it is resultNumber get that value by reference
 * @param input user input
 * @param resultNumber reference of output integer value
 * @return is user input an integer value
 */
bool isInt(const std::string& input, int& resultNumber) {
    try {
        resultNumber = std::stoi(input);
    } catch (std::invalid_argument&) {
        return false;
    }
    return true;
}

/**
 * Function to checking if user guess secret number and react to result
 * @param secretNumber casino's number
 * @param userNumber user's number
 */
bool checkGuess(int secretNumber, int userNumber) {
    if(secretNumber == userNumber) {
        std::cout << "Congratulations! Your guessing is right." << std::endl;
        return true;
    }
    std::cout << "It seems you out of luck today. Mine number is " << secretNumber << std::endl;
    return false;
}