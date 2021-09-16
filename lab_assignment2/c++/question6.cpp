#include<iostream>

class date{
    int hour  , minutes , seconds;

    public:
    date():hour{0} , minutes{0} , seconds {0}{     
    } 
    date(int hour , int minutes , int seconds)
    : hour{hour } , minutes { minutes} , seconds {seconds}{
        this->minutes += this->seconds/60;
        this->seconds %=60;
        this->hour += this->minutes/60; 
        this->minutes %=60;
        
        
    }
    void display() const{
        std::cout << std::endl << hour << " : " << minutes << " : " << seconds ;
    }
};

int main(){
    date today , yesterday {11 , 343 ,4657};
    today.display();
    yesterday.display();
    std::cout << std::endl;
    return 0;
}