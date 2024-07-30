#pragma once
#include "contact.h"
#include <vector>

/*
20240730 UPDATE LOG
introduced vector (with the help of ChatGPT)
removed the revise function
class function: manage and transmit 
*/

class AddressBook{
    public:
        // add new contact
        void addContact(const Contact& newContact);       
        
        // search existing contact
        std::vector<Contact>::iterator searchContact(const std::string& keyword){};
        
        // remove existing contact
        bool removeContact(const std::string& targetName);

        // display all contacts
        const Contact* displayAllContacts() const;

    private:
        std::vector<Contact> contacts; 

};