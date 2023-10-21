#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User{

    public:
        User(); // Default Constructor
        User(const string& firstname, const string& lastname, const string& address, const int age);

        // Getters and Setters
        const string& getFirstName() const;
        const string& getLastName() const;
        const string& getAddress() const;
        const int& getAge() const;

        void setFirstName(string firstname);
        void setLastName(string lastname);
        void setAddress(string address);
        void setAge(int age);

    private:

        string firstname;
        string lastname;
        string address;
        int age;

};

#endif