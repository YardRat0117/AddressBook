#include "AddressBook.h"
#include <iostream>

// default constractor funciton
AddressBook::AddressBook(){
    size = 0;
}

// show all contacts
void AddressBook::showAllContacts() const {
    for(int index = 0;index < size;index++){
        contactArray[index].show();
    }
}

// add new contact
void AddressBook::appendContact(){
    std::string n,p,e;
    std::cout << "Please enter name: \n";
    std::cin >> n;
    std::cout << "Please enter phone number: \n";
    std::cin >> p;
    std::cout << "Please enter email: \n";
    std::cin >> e;
    contactArray[size].revise(size + 1,n,p,e);
    size += 1;
}

// delete existing contact
void AddressBook::deleteContact(){
    contactArray[size - 1].init();
    size -= 1;
}

// search contact by name
void AddressBook::searchName(){
    std::string target,temp;
    bool isFound = false;
    std::cout << "Please enter the name you want to search for: \n";
    std::cin >> target;
    for(int index = 0;index < size;index++){
        temp = contactArray[index].requestName();
        if(temp == target){
            std::cout << "Contact found!\n";
            contactArray[index].show();
            isFound = true;
        }
    }
    if(!isFound){
        std::cout << "Contact not-found!\n";
    }
}