#include "contact.h"
#include <iostream>

// merged constructor function
Contact::Contact(
    const std::string& newName = "", 
    const std::string& newPhone = "", 
    const std::string& newEmail = ""
    ) : name(newName), phone(newPhone), email(newEmail) {}


// get for property values
std::string Contact::getName() const {return name;}
std::string Contact::getPhone() const {return phone;}
std::string Contact::getEmail() const {return email;}

//set property values
void Contact::setName(const std::string& newName){name = newName;}
void Contact::setPhone(const std::string& newPhone){phone = newPhone;}
void Contact::setEmail(const std::string& newEmail){email = newEmail;}

// check whether the given keyword matchs the contact
bool Contact::isMatch(const std::string& keyword) const {
    return (this->getName() == keyword) || (this->getPhone() == keyword) || (this->getEmail() == keyword);
}

// display the contact
void Contact::display() const {
    std::cout << "Contact name: " << this->getName() << "\n";
    std::cout << "Contact phone: " << this->getPhone() << "\n";
    std::cout << "Contact email: " << this->getEmail() << "\n";
}