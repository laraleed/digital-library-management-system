//  LibrarySystem.cpp
#include "LibrarySystem.h"
#include <iostream>


//Constructor to initialize the Library System
LibrarySystem::LibrarySystem(){
    std::cout<<"Library System Initialized."<<std::endl; //Print information that initializing is successful
}

//Add the user to the system
void LibrarySystem::addUser(LibraryUser* user){
    users.push_back(user); //Add the user to the users vector
}

//Search for a book with the title
LibraryBook* LibrarySystem::searchBook(const std::string title){
    try {
        for(LibraryBook* book:books){ //Look for all books in a loop
            if(book->getTitle() == title){ //Check if it is the book that searched for
                std::cout<<"Book is found: "<<std::endl;
                book->displayInfo(); //Print the book's details
                return book; //Returns if the book is found
            }
        }
        throw std::logic_error("The book is not in the library."); //No book is found
    } catch (std::logic_error& e) {
        std::cout<<e.what()<<std::endl; //Print exception
        return nullptr;
    }
    
}

//Displays all books from books
void LibrarySystem::displayAllBooks() const{
    try {
        if (books.empty()){
            throw std::logic_error("There is no book to display."); //Exception for empty book collection
        }
        else{
            std::cout<<"Displaying all books:"<<std::endl;
            for(LibraryBook* book:books){
                book->displayInfo();
            }
        }
    } catch (std::logic_error& e) {
        std::cout<<e.what()<<std::endl; //Print exception
    }
}

//Displays all users from users
void LibrarySystem::displayAllUsers() const{
    try {
        if (users.empty()){
            throw std::logic_error("There is no user to display."); //Exception for no user
        }
        else{
            std::cout<<"Displaying all users:"<<std::endl;
            for(LibraryUser* user:users){
                user->displayUserInfo(); //Print every user's information with the loop
            }
        }
    } catch (std::logic_error& e) {
        std::cout<<e.what()<<std::endl; //Print exception
    }
}

//Returns books vector
std::vector<LibraryBook*>& LibrarySystem::getBooks(){
    return books;
}
