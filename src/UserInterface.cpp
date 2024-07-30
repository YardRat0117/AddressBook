#include "UserInterface.h"
#include <iostream>

// show the user menu
void UserInterface::showMenu() {
    std::cout << "========== Address Book Menu ==========\n";
    std::cout << "1. Add new contact\n";
    std::cout << "2. Search existing contact\n";
    std::cout << "3. Remove existing contact\n";
    std::cout << "4. Display all contacts\n";
    std::cout << "5. Exit\n";
    std::cout << "========================================\n";
    std::cout << "Please enter your choice: ";
}

// the user choose to add
void userAdd();

// the user choose to search
void userSearch();

// the user choose to remove
void userRemove();

// the user choose to display all
void userDisplayAll();