#pragma once
#include<string>

/*
20240730 UPDATE LOG
removed the display function and the revise function. 
class function: store
*/

class Contact{
    public:
        // merged constructor function
        Contact(
            const std::string& newName, 
            const std::string& newPhone, 
            const std::string& newEmail
        );

        // get property values
        std::string getName() const;
        std::string getPhone() const;
        std::string getEmail() const;

        // set property values
        void setName(const std::string& newName);
        void setPhone(const std::string& newPhone);
        void setEmail(const std::string& newEmail);

        // check whether the given keyword matchs the contact
        bool isMatch(const std::string& keyword) const; 
        
        // display the contact
        void display() const;
    private:
        // properties
        std::string name;
        std::string phone;
        std::string email;
};