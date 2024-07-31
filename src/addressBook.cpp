#include "AddressBook.h"
#include <iostream>
#include <algorithm>

// add new contact
void AddressBook::addContact(const Contact& newContact){
    Contacts.push_back(newContact);
}

// search existing contact and return iterator
std::vector<Contact>::iterator AddressBook::findContact(const std::string& keyword){
    return std::find_if(
        Contacts.begin(), 
        Contacts.end(), 
        [&keyword](const Contact& item){return item.isMatch(keyword);}
    );
}

// search existing contact and return address
Contact* AddressBook::getContact(const std::string& keyword){
    Contact* result = nullptr;
    auto findResult = findContact(keyword);
    if(findResult != Contacts.end()){
        result = &(*findResult);
    }
    return result;
}

// remove existing contact
bool AddressBook::removeContact(const std::string& targetName){
    bool isRemoved = false;
    auto target = findContact(targetName);
    if(target != Contacts.end()){
        Contacts.erase(target);
        isRemoved = true;
    }
    return isRemoved;
}

// display all contacts
void AddressBook::displayAllContacts() const {
    for(
        auto iter = Contacts.begin();
        iter != Contacts.end();
        ++iter
    )  {
        iter->display();
    }
}
