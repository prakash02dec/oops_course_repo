#include<iostream>
#include<string>

class student {
    public:
    std::string name;
    int age ;
    int roll_no;

    void display() const{
        std::cout << std::endl << "name : " << name;
        std::cout << std::endl << "age : " <<age;
        std::cout << std::endl << "roll no : "<< roll_no << std::endl;
    }

    void compare_age(const student &ref) const {
        if(age == ref.age){
            std::cout<< std::endl << "both student age is equal";
        }else{
            std::cout << std::endl << "both student age not equal";
        }
    }
};

int main(){
    student rahul{"rahul",21, 33} , rohit{"rohit",22,74};
    rahul.display();
    rohit.display();
    rahul.compare_age(rohit);
    std::cout<< std::endl ;
    return 0;
}