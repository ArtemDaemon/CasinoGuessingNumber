#include <iostream>
#include <random>

int getSecretNumber(int min, int max);

int getUserInt();

bool isInt(const std::string& input, int& resultNumber);

int main() {
    int userNumber = getUserInt();
    std::cout << "Your number is... " << userNumber << std::endl;
    return 0;
}

/**
 * Function for getting integer value from user input
 * @return integer value
 */
int getUserInt() {
    std::string userInput;
    int userInt;

    std::cout << "Please enter a number..." << std::endl;
    std::cin >> userInput;

    while(!isInt(userInput, userInt)) {
        std::cout << "Bad entry! Enter a number" << std::endl;
        std::cin >> userInput;
    }

    return userInt;
}

/**
 * Function for validating if user input is integer. If it is resultNumber get that value by reference
 * @param input user input
 * @param resultNumber reference of output integer value
 * @return is user input integer value
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
