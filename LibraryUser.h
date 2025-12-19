//  LibraryUser.h
#ifndef LIBRARYUSER_H
#define LIBRARYUSER_H

#include <string>

class LibraryUser{
    
protected: //Attributes:
    
    std::string name; //Name of the user
    int userID; //Unique ID of the user
    
public: //Methods:
    
    LibraryUser(const std::string name,int id); //Constructor to initialize the attributes
    virtual void displayUserInfo() const = 0; //A virtual function to display user information
    
};

#endif
