#ifndef CONTACT_H
#define CONTACT_H

#include<string>

class contact{
    public:
        // unique id for each contact
        int id;
        
        // default constructor function
        contact();
        
        // initialization
        void init();

        // request for property values
        std::string requestName() const;
        std::string requestPhoneNumber() const;
        std::string requestEmail() const;

        // revise property values
        void reviseName(const std::string& n);
        void revisePhoneNumber(const std::string& p);
        void reviseEmail(const std::string& e);
        void revise(const int i, const std::string& n, const std::string& p, const std::string& e);

        // show contact page
        void show() const;

    private:
        // properties
        std::string name;
        std::string phoneNumber;
        std::string email;
};

#endif