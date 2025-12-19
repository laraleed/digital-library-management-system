//  Member.cpp
#include "Member.h"
#include <iostream>
#include <stdexcept>

//Constructor
Member::Member(const std::string name, int id): LibraryUser(name,id){
    std::cout<<"Adding new member: "<< name <<" (ID: "<< id <<")"<<std::endl; //Print information that the member is added
}

//Display the information of the member
void Member::displayUserInfo() const{
    std::cout<< "- Member: "<< name << ", ID: "<< userID <<std::endl;
}

//Borrow the book if available
void Member::borrowBook(LibraryBook* book){
    try {
        if(book == nullptr){
            throw std::logic_error("This book does not exist."); //Throw an exception
        }
        if (book->isAvailable()){ //Check if the book is available
            Member::borrowedBooks.push_back(book); //Add the book to the borrowed books
            book->setAvailability(false); //Change the availability of the book
            std::cout<< "Member "<< Member::name << " is borrowing \"" << book->getTitle() << "\"."<<std::endl; //Print information that borrowing is successful
        }
        else { //Book is not available
            throw std::logic_error("This book is not available at the moment."); //Throw an exception
        }
    } catch (std::logic_error& e) {
        std::cout << e.what() << std::endl; //Print information that borrowing is unsuccessful
    }
    
}

//Return the borrowed book
void Member::returnBook(LibraryBook* book){
    try{
        if(book == nullptr){
            throw std::logic_error("This book is not exists."); //Throw an exception
        }
        auto it = find(borrowedBooks.begin(),borrowedBooks.end(),book); //Search for the book in borrowed books
        if(it != borrowedBooks.end()){ //Check if the book is borrowed
            borrowedBooks.erase(it); //Erase the book from borrowed books
            book->setAvailability(true); //Change the availability of the book since it is returned
            std::cout<< "Member "<< Member::name << " returned \"" << book->getTitle() << "\"."<<std::endl; //Print information that returning is successful
        }
        else{
            throw std::logic_error("This book is not borrowed."); //Throw an exception
        }
    } catch (std::logic_error& e) {
        std::cout << e.what() << std::endl; //Print information that returning is unsuccessful
    }
    
}
