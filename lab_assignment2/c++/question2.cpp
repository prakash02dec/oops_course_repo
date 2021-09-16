#include<iostream>
#include<string>


class faculty{
    std::string name , id , branch;
    int salary ;

    public:
    faculty(std::string name = "none" , std::string id ="none" , std::string branch  ="none"  , int salary = 0)
    : name{name} , id {id} , branch {branch} ,  salary {salary} {};



    void form(){
        std::cout<<std::endl<<"enter the name : ";
        std::cin>>name;
        std::cout<<std::endl<<"enter id : ";
        std::cin>>id;
        std::cout<<std::endl<<"enter branch : ";
        std::cin>>branch;
        std::cout<<std::endl<<"enter salary : ";
        std::cin>>salary;
    }

    void display() const{
        std::cout<<std::endl<<"the name : "<<name;
        std::cout<<std::endl<<"id : "<<id;
        std::cout<<std::endl<<"branch : "<<branch;
        std::cout<<std::endl<<"salary : "<<salary<<std::endl;
    }
};


int main(){
    faculty ninja , ironman , hulk , thor , spiderman{"spiderman", "cse002","csa" , 10000};
    // ninja.form();
    // ironman.form();
    // hulk.form();
    // ninja.display();
    // ironman.display();
    // hulk.display();
    // thor.display();
    spiderman.display();
    std::cout<<std::endl;
    return 0;

} 