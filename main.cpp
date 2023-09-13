#include <iostream>
#include <random>

int getSecretNumber(int min, int max);

int main() {
    int secretNumber = getSecretNumber(0, 100);
    std::cout << "New secret number is... " << secretNumber << std::endl;
    return 0;
}

// Function to generate random int from min to max
int getSecretNumber(int min, int max) {
    std::random_device device;
    std::mt19937 rng(device());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(rng);
}
