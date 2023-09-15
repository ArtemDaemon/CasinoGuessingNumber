#include <iostream>
#include <string>

class Profile {
    private:
        std::string name;
        unsigned int balance;
    public:
        Profile(std::string p_name, unsigned int p_balance) {
            name = p_name;
            balance = p_balance;
        }
        void addBalance(unsigned int money);
        void subtractBalance(unsigned int money);
        void print();
};