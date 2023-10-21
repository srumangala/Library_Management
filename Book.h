#ifndef BOOK_H
#define BOOK_H


#include <string>
using namespace std;


class Book{
    public:
        Book(); // Default Constructor
        Book(const string& title, const string& author, const string& ISBN, bool available); 

        // Member functions : Getters and Setters
        const string& getTitle() const;
        const string& getAuthor() const;
        const string& getISBN() const;
        bool isAvailable() const;
        void setAvailability(bool Available);
    
    private:
        string title;
        string author;
        string ISBN;
        bool isBookAvailable;

};

#endif