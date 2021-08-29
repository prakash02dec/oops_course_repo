#include"user.hpp"
#include<fstream>


// user::user(int age , int weight , int amount_of_blood, std::string name, std::string health){
// }

// user::~user(){
// }

void user::registration(){
    std::ofstream out_file;
    std::cout<<"=============================USER REGISTRATION PORTAL=============================";
    std::cout<<"==================================================================================";
    
    std::cout<<"\nEnter the doner name :"<<std::endl;
    std::cin>>name;
    std::cout<<"\nEnter your age:"<<std::endl;
    std::cin>>age;
    
    if(age<18){
        std::cout<<"SORRY YOU ARE NOT ELIGIBLE TO DONATE BLOOD"<<std::endl;
        return ;
    }
    std::cout<<"\nEnter your weight (KG)"<<std::endl;
    std::cin>>weight;
    
    if (weight<40){
        std::cout<<"SORRY YOU ARE NOT ELIGIBLE TO DONATE BLOOD"<<std::endl;
        return ;
    }

    std::cout<<"\n HAVE YOU BEEN ILL IN YOUR LAST 6 MONTH?(yes/no)"<<std::endl;
    std::cin>>health_ill_status;

    std::cout<<"\nENTER YOUR BLOOD GROUP"<<std::endl;
    std::cin>>blood_group;

    std::cout<<"\nENTER THE QUANTITY OF BLOOD YOU WANT TO DONATE (ML)"<<std::endl;
    std::cin>>amount_of_blood;

    {
        std::cout<<"DO YOU AGREE TO SUMBMIT DETAIL FOR REGISTRATION"<<std::endl;
        std::string response;
        std::cin>>response;
        if(response == "no" || response == "NO" )
        return ;
    }

    
    std::cout<< "YOUR FORM IS SUBMITTED FOR APPORVAL" << std::endl;

    out_file.open("../data/new_donor.txt", std::ios::app);

    out_file<< name << std::endl << age << std::endl << weight << std::endl << health_ill_status 
    << std::endl << blood_group << std::endl << amount_of_blood << std::endl ;
    
    out_file.close();
}