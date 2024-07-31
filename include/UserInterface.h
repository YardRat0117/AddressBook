#pragma once
#include "AddressBook.h"
#include <iostream>

/*
20240730 UPDATE LOG
created this class
class function: interact with users
*/

class UserInterface{
    public:
        // show the user menu
        void showMenu();

        // start
        void start(AddressBook& targetBook);

        // the user choose to add
        void userAdd(AddressBook& targetBook);

        // the user choose to search
        void userSearch(const AddressBook& targetBook);

        // the user choose to remove
        void userRemove(AddressBook& targetBook);

        // the user choose to display all
        void userDisplayAll(const AddressBook& targetBook) const;

    private:
        AddressBook CurrentBook;
};