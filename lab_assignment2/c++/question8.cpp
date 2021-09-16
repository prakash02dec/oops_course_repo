#include<iostream>

class student{
    static int sem;
    static std::string institute;
    std::string name , usn;
    public:

    student(std::string name ="none" , std::string usn = "usn")
    : name{name} , usn {usn}{
    } 

    void display() const{
        std::cout<< std::endl << "sem : "<<sem; 
        std::cout<< std::endl << "institute : " << institute;
        std::cout<< std::endl << "name : "<< name;
        std::cout<< std::endl << "usn : " << usn <<std::endl;

    }
    static void global_display(){
        std::cout<< std::endl << "sem : "<<sem; 
        std::cout<< std::endl << "institute : " << institute;
    }
};

int student::sem {3};
std::string student::institute {"Indian Institute of Information technology"};


int main(){
    student rahul ("Rahul", "19");
    rahul.display();
    rahul.global_display();
    student::global_display();
    std::cout<< std::endl ;
    return 0;
}