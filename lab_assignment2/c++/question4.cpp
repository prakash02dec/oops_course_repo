#include<iostream>
#include<string>
#include<vector>

class student{
    std::string name , usn;
    std::vector <int> marks;

    public:
    student(std::string name = "none" , std::string usn = "xxxxx" , int subject_1 = 0, int subject_2 = 0, int subject_3 = 0 )
    : name {name} , usn {usn} , marks {subject_1 , subject_2 , subject_3} {
    } 
    
    void display() const {
        std::cout <<std::endl << "name : " << name;
        std::cout <<std::endl << "usn : " << usn;
        int i=1;
        for(const auto &subject_marks : marks){
            std::cout <<std::endl<< "subject "<<i <<"marks : "<<subject_marks;
        } 
        std::cout << std::endl;
    }
};

int main(){
    student prakash{"prakash" , "20bcs099" , 90 , 96 , 93};
    prakash.display();

    std::cout <<std::endl;
    return 0;
}
