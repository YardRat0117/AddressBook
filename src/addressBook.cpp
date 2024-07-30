#include "AddressBook.h"
#include <iostream>

// default constractor funciton
AddressBook::AddressBook(){
    size = 0;
}

// show all contacts
void AddressBook::showAllContacts() const {
    if(size == 0){
        std::cout << "No contact stored currently.\n";
    }
    else{
        for(int index = 0;index < size;index++){
         contactArray[index].show();
        }
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
    searchName();
    std::cout << "Are you sure to delete the contact? If so, please type the contact's id; if not, please type the number 0. \n";
    int target = false;
    std::cin >> target;
    if(target){
        contactArray[target - 1].copy(contactArray[size - 1]);
        size -= 1;
        std::cout << "Successfully deleted! \n";
    }
    else{
        std::cout << "Failed to delete! \n";
    }
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