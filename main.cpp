//main.cpp
#include "LibrarySystem.h"
#include <iostream>
int main(){
    LibrarySystem* my_library = new LibrarySystem;
    std::vector<LibraryBook*>& books_ref = my_library->getBooks();
    Member* m1 = new Member("John Doe",101);
    Librarian* l1 = new Librarian("Sarah Smith",102);
    my_library->addUser(m1);
    my_library->addUser(l1);
    std::cout<<std::endl;
    
    LibraryBook* b1 = new LibraryBook("1984","George Orwell", "9780451524935");
    l1->addBook(b1,books_ref);
    std::cout<<"Total books: "<<LibraryBook::getTotalBooks()<<std::endl;
    LibraryBook* b2 = new LibraryBook("To Kill a Mockingbird","Harper Lee", "9780060935467");
    l1->addBook(b2,books_ref);
    std::cout<<"Total books: "<<LibraryBook::getTotalBooks()<<std::endl;
    std::cout<<std::endl;
    
    m1->borrowBook(b1);
    m1->borrowBook(b1);
    m1->returnBook(b1);
    m1->returnBook(b2);
    std::cout<<std::endl;
    
    my_library->displayAllBooks();
    std::cout<<std::endl;
    l1->removeBook("9780451524935",books_ref);
    my_library->displayAllBooks();
    std::cout<<std::endl;
    my_library->displayAllUsers();
    my_library->searchBook("To Kill a Mockingbird");
    
    return 0;
}
