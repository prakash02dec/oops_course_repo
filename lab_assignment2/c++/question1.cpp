#include<iostream>

const int PI = 3.14159;

class circle{
    int radius;

    public:
    
    circle(): circle(0){};
    
    circle(int radius) : radius {radius} {};


    double area() const{
        return static_cast<double>(PI * radius * radius);
    }
    
    double parameter() const {
        return static_cast<double>(2 * PI * radius);
    }
    ~circle(){
    };
};

int main (){
    circle a{200} ;
    std::cout<<"the area of a circle " << a.area()<<std::endl;
    std::cout<<"the parameter of a circle " << a.parameter() ;
    
    std::cout<<std::endl;
    return 0;

}