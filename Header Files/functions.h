#include <string>
#include <iostream>
#include <random>

int getSecretNumber(int min, int max);

int getUserInt();

bool isInt(const std::string& input, int& resultNumber);

void checkGuess(int secretNumber, int userNumber);