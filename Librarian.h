//  Librarian.h
#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include "LibraryBook.h"
#include "LibraryUser.h"

//Derived class Librarian, inherits from LibraryUser
class Librarian: public LibraryUser{

public: //Methods
    
    Librarian(const std::string name, int id); //Constructor to create a librarian
    void displayUserInfo() const; //Inherits from LibraryUser class
    void addBook(LibraryBook* book, std::vector<LibraryBook*>& books); //Allows the librarian to add a book to the library
    void removeBook(std::string ISBN,std::vector<LibraryBook*>& books); //Removes a book by its ISBN
    
};

#endif
