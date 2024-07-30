#include "AddressBook.h"
#include <iostream>
#include <algorithm>

// add new contact
void AddressBook::addContact(const Contact& newContact){
    contacts.push_back(newContact);
    std::cout << "Successfully added the new contact: " << newContact.getName() << "\n";
}

// search existing contact
std::vector<Contact>::iterator AddressBook::searchContact(const std::string& keyword){
    return std::find_if(
        Contacts.begin(), 
        Contacts.end(), 
        [&keyword](const Contact& item){item.isMatch(keyword)}
    )
}

// remove existing contact
bool AddressBook::removeContact(const std::string& targetName){
    bool isRemoved = false;
    target = searchContact(targetName);
    if(target != Contacts.end()){
        target.erase();
        isRemoved = true;
    }
    return isRemoved;
}

// display all contacts
const Contact* displayAllContacts() const {
    for(
        std::vector<Contact>::iterator iter = Contacts.begin(); 
        iter != Contacts.end();
        ++iter
    )  {
        iter->display();
    }
}