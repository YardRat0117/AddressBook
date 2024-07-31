#include "UserInterface.h"
#include <iostream>
#include <string>

// show the user menu
void UserInterface::showMenu(){
    std::cout << "========== Address Book Menu ==========\n";
    std::cout << "1. Add new contact\n";
    std::cout << "2. Search existing contact\n";
    std::cout << "3. Remove existing contact\n";
    std::cout << "4. Display all contacts\n";
    std::cout << "5. Exit\n";
    std::cout << "========================================\n";
    std::cout << "Please enter your choice: ";
}

// start
void UserInterface::start(AddressBook& targetBook){
    //intialize
    int choice = -1;
    bool isUsing = true;
    CurrentBook = targetBook;

    while(isUsing){
        showMenu();
        std::cin >> choice;
        switch(choice){
            case 0:
                std::cout << "YOU'VE DISCOVERER THE EASTER EGG! \n";
                break;
            case 1:
                userAdd(CurrentBook);
                break;
            case 2:
                userSearch(CurrentBook);
                break;
            case 3:
                userRemove(CurrentBook);
                break;
            case 4:
                userDisplayAll(CurrentBook);
                break;
            case 5:
                std::cout << "Thanks for using! \n";
                isUsing = false;
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}

// the user choose to add
void UserInterface::userAdd(AddressBook& targetBook){
    // request the user for info
    std::string newName, newPhone, newEmail;
    std::cout << "Enter the name of new contact: \n";
    std::cin >> newName;
    std::cout << "Enter the phone number of new contact: \n";
    std::cin >> newPhone;
    std::cout << "Enter the email of new contact: \n";
    std::cin >> newEmail;

    // input info into address book
    Contact newContact(newName, newPhone, newEmail);
    targetBook.addContact(newContact);
}

// the user choose to search
void UserInterface::userSearch(const AddressBook& targetBook){
    // request the user for info
    std::string keyword;
    std::cout << "Enter the keyword: \n";
    std::cin >> keyword;

    // call the address book to search
    Contact* result = targetBook.getContact(keyword);
    if(result != nullptr){
        cout << "Contact found! \n";
        result->display();
    }
    else{
        cout << "Contact not found! \n";
    }
}

// the user choose to remove
void UserInterface::userRemove(AddressBook& targetBook){
    // request the user for info
    bool isSure = false;
    std::string keyword;
    std::cout << "Enter the keyword: \n";
    std::cin >> keyword;

    // call the address book to search
    auto result = targetBook.findContact(keyword);

    // respond to the user request
    std::cout << "Sure to remove? If so, please enter 'true'; if not, please enter 'false' \n";
    cin >> isSure;
    if(isSure){
        bool isRemoved = targetBook.removeContact(result);
        // provide feedback
        if(isRemoved){
            std::cout << "Succeeded to remove! \n";
        }
        else{
            std::cout << "Failed to remove! \n";
        }
    }
}

// the user choose to display all
void UserInterface::userDisplayAll(const AddressBook& targetBook) const {
    targetBook.displayAllContacts();
}