#ifndef _USER_H_
#define _USER_H_

#include"admin.hpp"
#include<string>
#include<iostream>
class user{
    private:
    friend void blood_sample();
    friend class admin;
    int age , weight , amount_of_blood;
    std::string  name, health_ill_status , blood_group;
    
    public:

    // user(int age , int weight , int amount_of_blood,
    //  std::string name, std::string health , std::string blood_group){

    // }

    ~user(){

    }

    void registration();


    // void display() const;

};

#endif