#ifndef _HOSPITAL_H_
#define _HOSPITAL_H_

#include<string>

class hospital {
    friend class admin;
    std::string hospital_name , license_id , blood_group;
    int amount_of_blood;

    public:

    hospital(){
    }
    ~hospital(){
    }

    void hospital_request();


};

#endif