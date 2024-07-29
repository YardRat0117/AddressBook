#include "contact.h"
#include <iostream>

// default constructor function
contact::contact(){
    contact:init();
}

// initialization
void contact::init() {
    id = -1;
    name = "";
    phoneNumber = "";
    email = "";
}

// request for property values
std::string contact::requestName() const {
    return name;
}
std::string contact::requestPhoneNumber() const {
    return phoneNumber;
}
std::string contact::requestEmail() const {
    return email;
}

//revise property values
void contact::reviseName(const std::string& n){
    name = n;
}
void contact::revisePhoneNumber(const std::string& p){
    phoneNumber = p;
}
void contact::reviseEmail(const std::string& e){
    email = e;
}
void contact::revise(const int i,const std::string& n,const std::string& p,const std::string& e){
    id = i;
    name = n;
    phoneNumber = p;
    email = e;
}

// show contact page
void contact::show() const {
        std::cout << "Contact id: " << id << "\n";
        std::cout << "Contact name: " << name << "\n";
        std::cout << "Contact phone number: " << phoneNumber << "\n";
        std::cout << "Contact email: " << email << "\n";
}