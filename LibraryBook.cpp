//  LibraryBook.cpp
#include "LibraryBook.h" // To write the implementation of the header file
#include <iostream> // For using std::cout and std::endl

//Initialization of static variable
int LibraryBook::totalBooks = 0;

// Constructor implementation:
LibraryBook::LibraryBook(const std::string title, std::string author, std::string isbn)
: title(title),author(author),ISBN(isbn),available(false){totalBooks ++;}

// Method implementations:
void LibraryBook::displayInfo() const{
    std::string av; // availability of the book as a string "Yes" or "No" answer
    if (isAvailable()) av = "Yes";
    else av = "No";
    std::cout <<"- Title: \""<<title<<"\", Author: "<<author<<", ISBN: "<<ISBN<< ", Available: " << av << std::endl;
}
void LibraryBook::setAvailability(bool b){
    available = b;
}
bool LibraryBook::isAvailable() const{
    return available;
}
int LibraryBook::getTotalBooks(){
    return totalBooks;
}
std::string LibraryBook::getTitle() const{
    return title;
}
std::string LibraryBook::getAuthor() const{
    return author;
}
std::string LibraryBook::getISBN() const{
    return ISBN;
}
