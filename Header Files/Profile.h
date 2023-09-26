#include <iostream>
#include <string>

class Profile {
    private:
        std::string name;
        unsigned balance;
    public:
        Profile(const std::string p_name, const unsigned p_balance) {
            name = p_name;
            balance = p_balance;
        }
        unsigned getBalance();
        void addBalance(unsigned);
        void subtractBalance(unsigned);
        void print();
};