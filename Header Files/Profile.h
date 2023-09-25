#include <iostream>
#include <string>

class Profile {
    private:
        std::string name;
        unsigned int balance;
    public:
        Profile(const std::string p_name, const unsigned int p_balance) {
            name = p_name;
            balance = p_balance;
        }
        unsigned int getBalance();
        void addBalance(unsigned int);
        void subtractBalance(unsigned int);
        void print();
};