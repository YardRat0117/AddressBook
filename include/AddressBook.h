#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#define MAX_CAPACITY 1000

#include "contact.h"
#include <iostream>
#include <string>

class AddressBook{
    public:
        // default constractor function
        AddressBook();

        // show all contacts
        void showAllContacts() const;
        
        // add new contact
        void appendContact();
        
        // delete existing contact
        void deleteContact();

        // search contact by name
        void searchName();

    private:
        // array of contacts to store data
        contact contactArray[MAX_CAPACITY];

        // number of contacts stored
        int size;

};

#endif