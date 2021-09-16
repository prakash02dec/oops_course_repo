#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>

class patient{
    friend class hospital;

    static int patients ;
    std::string name , date_of_admission;
    std::vector <std::string> symptoms ;
    int oxy_level;
    std::string date_of_discharge;
    
    public:
    
    patient(std::string name = "none" , std::string date_of_admission = "dd/mm/yyyy" ,
    std::vector<std::string> symptoms = {}, int oxy_level = 100, std::string date_of_discharge = "dd/mm/yyyy" )
    : name {name}, date_of_admission {date_of_admission} , symptoms{std::move(symptoms)} , oxy_level {oxy_level} , date_of_discharge {date_of_discharge} {
        ++patients ;
    }

    patient(const patient &source)
    :  patient(source.name , source.date_of_admission, source.symptoms , source.oxy_level , source.date_of_discharge){

    }

    patient(patient &&source) 
    : name {source.name}, date_of_admission {source.date_of_admission} , symptoms{std::move(source.symptoms)} ,
     oxy_level {source.oxy_level} , date_of_discharge {source.date_of_discharge} {

    }

    static int no_of_patient(){
    return patients;
    }

    void form(){
        std::cout << std::endl << "============================================="; 
        std::cout << std::endl << "enter name : " ;
        std::cin >> name;
        std::cout << std::endl << "enter date of admission : ";
        std::cin>> date_of_admission;
        std::cout << std::endl << "symptoms : " << std::endl;
        std::string temp;
        char response;

        do{
            std::cout<<"enter symptom : ";
            std::cin>>temp;
            symptoms.emplace_back(temp);
            std::cout<<"want to add more symptom(y/n)";
            std::cin>> response;
        }while(response=='y' || response == 'Y');

        std::cout << std::endl << "oxygen level : " ;
        std::cin >> oxy_level;
        std::cout << std::endl << "date of discharge : " ;
        std::cin >> date_of_discharge;
        std::cout << std::endl << "=============================================";         
    }

    void display() const{
        std::cout << std::endl << "============================================="; 
        std::cout << std::endl << "name : " << name;
        std::cout << std::endl << "date of admission : " << date_of_admission;
        std::cout << std::endl << "symptoms : " ;
        for(const auto &symptom :symptoms){
            std::cout << symptom <<",\t";
        } 
        std::cout << std::endl << "oxygen level : " << oxy_level;
        std::cout << std::endl << "date of discharge : " <<date_of_discharge;
        std::cout << std::endl << "============================================="; 
    }

    bool check_severity() const{
        if(oxy_level<90)
        return true;
        else
        return false;
    };

    ~patient(){
        --patients;
    }
};

int patient::patients {0};

class hospital{
    std::vector<patient> general_ward;
    std::vector<patient> oxygen_support;
    std::vector<patient> all_patient;

    public:


    void add_patient();
    void display(); 
    void check_severity();
    void no_of_patient() {
        std::cout << std::endl << "total number of patient : " << all_patient.size();
    };
    void no_of_general_ward_patient(){
        std::cout << std::endl << "total number of general ward patient : " << general_ward.size(); 
    }
    void no_of_oxygen_support_patient(){
        std::cout << std::endl << "total number of oxygen support patient : " << oxygen_support.size();
    }
};

void hospital::add_patient(){
    patient temp;
    temp.form();
    for(const auto &patient : all_patient)
    if(temp.name==patient.name){ 
        std::cout <<std::endl<< "patient already exist";    
        return;
    }
    all_patient.emplace_back(temp);

    if(temp.check_severity())
    oxygen_support.emplace_back(temp);
    else
    general_ward.emplace_back(temp);
    
    
}

void hospital::display(){
    no_of_patient();
    
    no_of_general_ward_patient();
    for(const auto &patient : general_ward)
    patient.display();
    
    no_of_oxygen_support_patient(); 
    for(const auto &patient : oxygen_support)
    patient.display();
}

void hospital::check_severity(){
    std::cout << std::endl << "enter the name of patient to check severity";
    std::string name;
    std::cin >> name;
    for(const auto &patient : all_patient)
    if(name==patient.name && patient.check_severity()){
         std::cout << "patient is serious";
    }

    std::cout << std::endl << "patient not found ";

}

int main(){
    hospital aiims;
    aiims.add_patient();
    aiims.add_patient();
    aiims.add_patient();
    aiims.add_patient();
    aiims.display();
    aiims.no_of_general_ward_patient();
    aiims.no_of_oxygen_support_patient();
    aiims.no_of_patient();

    std::cout << std::endl ;
    return 0;
}