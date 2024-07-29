#include<iostream>
#include<string>

#include"contact.h"
#include"AddressBook.h"

using namespace std;

void showMenu() {
    std::cout << "========== Address Book Menu ==========\n";
    std::cout << "1. Show all contacts\n";
    std::cout << "2. Add new contact\n";
    std::cout << "3. Delete existing contact\n";
    std::cout << "4. Search contact by name\n";
    std::cout << "5. Exit\n";
    std::cout << "========================================\n";
    std::cout << "Please enter your choice: ";
}

int main(){
    AddressBook ab;
    int choice = -1;
    bool isUsing = true;
    while(isUsing){
        showMenu();
        cin >> choice;
        switch(choice){
            case 1:
                // show all contact
                ab.showAllContacts();
                break;
            case 2:
                // add new contact
                ab.appendContact();
                break;
            case 3:
                // delete existing contact
                ab.deleteContact();
                break;
            case 4:
                // search contact by name
                ab.searchName();
                break;
            case 5:
                // exit
                cout << "Thank you for using!\n";
                isUsing = false;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
    return 0;
}