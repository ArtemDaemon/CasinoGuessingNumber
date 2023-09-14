#include <iostream>
#include <string>

class Profile {
    private:
        std::string name;
        int balance;
    public:
        Profile(std::string p_name, int p_balance) {
            name = p_name;
            balance = p_balance;
        }
        void print();
};