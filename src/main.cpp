#include <iostream>
#include <string>

#include "Contact.h"
#include "AddressBook.h"
#include "BookOperator.h"

using namespace std;

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