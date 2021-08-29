#include"hospital.hpp"
#include<iostream>
#include<fstream>

void hospital::hospital_request(){
     
  std::cout<< "============================HOSPITAL REGISTRATION PORTAL===========================" <<std::endl;
  std::cout<< "===================================================================================" <<std::endl;
  
  std::cout << "\nEnter Hospital name :"<<std::endl;
  std::cin >> hospital_name;
  std::cout<<"\nEnter hospital license id:" << std::endl; 
  std::cin>>license_id;
  std::cout<<"\nRequested Blood group :"<<std::endl;
  std::cin>>blood_group;
  std::cout<<"\nRequested Quantity (L):";
  std::cin>>amount_of_blood;

  std::cout<<"\nThanks for the details, your request will shortly be approved by the Bank"<<std::endl;

   std::ofstream out_file;

   out_file.open("../data/hospitals.txt", std::ios::app);

   out_file<< hospital_name<< std::endl <<license_id<<std::endl <<blood_group << std::endl << amount_of_blood << std::endl ;
   out_file.close();

   return;
}