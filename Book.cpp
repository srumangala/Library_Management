#include "Book.h"

using namespace std;

Book :: Book() : title("") ,author("") , ISBN(""), isBookAvailable(true) {

}
Book :: Book(const string& title, const string& author, const string& ISBN, bool available)
    : title(title), author(author), ISBN(ISBN), isBookAvailable(available) {
    // Initialize member variables in the constructor
}

const string& Book::getTitle() const {
    return title;
}

const string& Book::getAuthor() const {
    return author;
}

const string& Book::getISBN() const {
    return ISBN;
}

bool Book::isAvailable() const {
        return isBookAvailable;
    }

void Book::setAvailability(bool status){
        isBookAvailable = status;
}
