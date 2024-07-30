#include "contact.h"
#include <iostream>

// merged constructor function
Contact::Contact(
    const std::string& newName = "", 
    const std::string& newPhone = "", 
    const std::string& newEmail = ""
    ) : name(newName), phone = (newPhone), email(newEmail) {}


// get for property values
std::string Contact::getName() const {
    return name;
}
std::string Contact::getPhoneNumber() const {
    return phone;
}
std::string Contact::getEmail() const {
    return email;
}

//set property values
void Contact::setName(const std::string& newName){
    name = newName;
}
void Contact::setPhoneNumber(const std::string& newPhone){
    phone = newPhone;
}
void Contact::setEmail(const std::string& newEmail){
    email = newEmail;
}

// check whether the given keyword matchs the contact
bool isMatch(const std::string& keyword) const{
    return (Contact::getName == keyword) or (Contact::getPhone == keyword) or (Contact::getEmail == keyword);
}

// display the contact
void display() const {
    std::cout << "Contact name: " << Contact::getName() << "\n";
    std::cout << "Contact phone: " << Contact::getPhone() << "\n";
    std::cout << "Contact email: " << Contact::getEmail() << "\n";
}