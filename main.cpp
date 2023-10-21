#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include "Book.h"
#include "User.h"

int main(){
    vector<Book> books;
    vector<User> users;
    int choice;


    while(true) {
        cout<<"Library Management System"<<endl;
        cout<<"1. List of Available Books"<<endl;
        cout<<"2. Select Book"<<endl;
        cout<<"3. Return Book"<<endl;
        cout<<"4. New User Registration"<<endl;
        cout<<"5. Add Books - Admin"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Please select the required option !"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Sl.No"<<"\t"<<"Title"<<"\t \t \t"<<"Author"<< "\t \t"<< "ISBN"<< "\t \t"<<endl;
                for (const Book& book : books){
                    if (book.isAvailable()){
                            cout<<book.getTitle()<<"\t"<<book.getAuthor()<<"\t"<<book.getISBN()<<"\t"<<endl;
                    }
                }
                break;
            case 2:
                cout<<"Enter the Title of the book you wish to select"<<endl;

                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                cout<<"Exiting..."<<endl;
                return 0;
            default:

    }
    }


    return 0;
}