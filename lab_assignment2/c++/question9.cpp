#include<iostream>
#include<string>
#include<vector>

class student{
    std::string name;
    int roll_no;
    int sem;

    class laptop{
        public:
        std::string cpu , ram , hard_disk , display;     
        void display_details() const{
            std::cout<< std::endl << "cpu : " <<cpu;
            std::cout<< std::endl << "ram : " << ram;
            std::cout<< std::endl << "hard disk : " << hard_disk;
            std::cout<< std::endl << "display : " << display;
        }    
    };
    std::vector<laptop> laptops;
    public:
    
    void form(){
        std::cout<< std::endl << "name : " ;
        std::cin >> name;
        std::cout<< std::endl << "roll no : ";
        std::cin >> roll_no;
        std::cout<< std::endl << "sem : ";
        std::cin >> sem;
        add_laptop();

    };
    void add_laptop(){
        laptop temp;
        std::cout<< std::endl << "cpu : " ;
        std::cin >> temp.cpu;
        std::cout<< std::endl << "ram : ";
        std::cin >> temp.ram;
        std::cout<< std::endl << "hard disk : ";
        std::cin >> temp.hard_disk;
        std::cout<< std::endl << "display : ";
        std::cin >> temp.display;

        laptops.emplace_back(temp);
    }

    void display() const{
        std::cout<< std::endl << "name : " << name;
        std::cout<< std::endl << "roll no : " << roll_no;
        std::cout<< std::endl << "sem : " << sem;    

        for(const auto &lap : laptops){
            std::cout<< std::endl;
            lap.display_details();
            std::cout<< std::endl;
        } 

    }
};

int main(){
    student prakash;
    prakash.form();
    prakash.add_laptop();
    prakash.display();

    std::cout<< std::endl;
    return 0;
    
}