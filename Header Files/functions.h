#include <string>
#include <iostream>
#include <random>

int getSecretNumber(int min, int max);

unsigned int getUnsignedInt();

bool isUnsignedInt(const std::string& input, unsigned int& resultNumber);

bool isInt(const std::string& input, int& resultNumber);

bool checkGuess(int secretNumber, int userNumber);