#include "User.h"

using namespace std;

User :: User() : firstname(""), lastname(""),address(""), age(0) {

}

User :: User(const string& firstname, const string& lastname, const string& address, const int age)
    :firstname(firstname), lastname(lastname), address(address), age(age){

    }

const string& User::getFirstName() const {
    return firstname;
}

const string& User::getLastName() const {
    return lastname;
}

const string& User::getAddress() const {
    return address;
}

const int& User::getAge() const {
    return age;
}

void User::setFirstName(string fname){
    firstname=fname;
}

void User::setLastName(string lname){
    lastname=lname;
}

void User::setAddress(string addr){
    address= addr;
}

void User::setAge(int age_entered){
    age=age_entered;
}
