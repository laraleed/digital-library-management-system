//  Member.h
#ifndef MEMBER_H
#define MEMBER_H

#include <vector>
#include "LibraryBook.h"
#include "LibraryUser.h"

//Derived class Member, inherits from LibraryUser
class Member: public LibraryUser{
    
private: //Attribute:
    
    std::vector<LibraryBook*> borrowedBooks; //an array or vector of pointers to LibraryBook objects
    
public: //Methods:
    
    Member(const std::string name, int id); //Constructor to create a member
    void displayUserInfo() const; //Inherits from LibraryUser class
    void borrowBook(LibraryBook* book); //Allows a member to borrow a book if available
    void returnBook(LibraryBook* book); //Allows a member to return a borrowed book
    
};

#endif
