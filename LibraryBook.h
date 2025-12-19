//  LibraryBook.h
#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <string>

class LibraryBook{
    
private: //Attributes:
    
    std::string title; //Title of the book
    std::string author; //Author of the book
    std::string ISBN; //Unique ISBN identifier for the book
    bool available; //Indicates if the book is currently available
    
    //Static Attribute:
    static int totalBooks; //A static variable that keeps track of the total number of books created.
    
public: //Methods:
    
    //Constructor to initialize all attributes and increment totalBooks:
    LibraryBook(const std::string title, std::string author, std::string isbn);
    
    void displayInfo() const; //Displays book details
    void setAvailability(bool b); //Sets the availability of the book
    bool isAvailable() const; //Returns whether the book is available
    static int getTotalBooks(); //A static method that returns the total number of books
    
    std::string getTitle() const; //Returns the book's title
    std::string getAuthor() const; //Returns the book's author
    std::string getISBN() const; //Returns the book's ISBN
    
};

#endif
