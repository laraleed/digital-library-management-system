//  Librarian.cpp
#include "Librarian.h"
#include <vector>
#include <iostream>
#include <stdexcept>

//Constructor
Librarian::Librarian(const std::string name, int id): LibraryUser(name,id){
    std::cout<<"Adding new librarian: "<< name <<" (ID: "<< id <<")"<<std::endl; //Print information that the librarian is added
}

//Display the information of the librarian
void Librarian::displayUserInfo() const{
    std::cout<< "- Librarian: "<< name << ", ID: "<< userID <<std::endl;
}

//Add book to the system
void Librarian::addBook(LibraryBook* book,std::vector<LibraryBook*>& books){
    
    //Add the book to the library system's books
    books.push_back(book);
    std::cout<< "Adding book: \"" << book->getTitle()<< "\" by "<<book->getAuthor() << ", ISBN: "<<book->getISBN()<<std::endl;//Print the adding is successfull
    book->setAvailability(true); //Since the book added to the system, it is available
}

//Remove book by ISBN
void Librarian::removeBook(std::string ISBN,std::vector<LibraryBook*>& books){

    for(LibraryBook* book: books){ //Searching for the book by ISBN
        if(ISBN == book->getISBN()){ //Check to find the right book
            std::cout<<"The book \""<<book->getTitle()<<"\" is removed from library."<<std::endl;//Print information
            books.erase(find(books.begin(),books.end(),book)); //Remove the book from books vector
        }
    }
}




