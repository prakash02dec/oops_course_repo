#include<iostream>
#include<string>

class bank{
    long account_no;
    std::string name;
    int amount;

    public:
    bank (long account_no =00000000, std::string name = "none" , int amount = 0)
    : account_no{account_no} , name{name} , amount{amount} {};

    void deposit(int amount){
        this->amount += amount;
    }

    void withdraw(int amount){
        this->amount -= amount;
    }
    void check_balance() const {
        std::cout << std::endl << name <<"'s balance : "<<amount;
    }
    void details(){
        std::cout << std::endl << "account no : " << account_no;
        std::cout << std::endl << "name : " << name;
        std::cout << std::endl << "balance : " << amount <<std::endl;
    }

};


int main(){
    bank prakash{32598359080, "prakash" , 100000 } , james;

    james.details();
    prakash.details();
    prakash.deposit(1000);
    prakash.details();
    prakash.withdraw(5000);
    prakash.details();

    std::cout << std::endl;
    return 0;
}

