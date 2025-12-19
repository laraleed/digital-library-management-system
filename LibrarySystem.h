//  LibrarySystem.h
#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include "LibraryBook.h"
#include "LibraryUser.h"
#include "Librarian.h"
#include "Member.h"

class LibrarySystem{

private://Attributes:
    std::vector<LibraryBook*> books; //Holds all books in the library.
    std::vector<LibraryUser*> users; //Holds all users
    
public: //Methods:
    LibrarySystem(); //Constructor to create a library system
    void addUser(LibraryUser* user); //Adds a new user to the library
    LibraryBook* searchBook(const std::string title); //Searches for a book by title using a search algorithm
    void displayAllBooks() const; //Displays information on all books in the library, including total books
    void displayAllUsers() const; //Displays information on all users
    std::vector<LibraryBook*>& getBooks(); //Get alias of books vector
};

#endif
