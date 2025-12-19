# Digital Library Management System

This repository contains a simple **Digital Library Management System** written in **C++**. The project focuses on applying core object-oriented programming concepts in a clear and understandable way.

The system models a small library where books and users are managed through different classes. Members can borrow and return books, while librarians are responsible for managing the library collection.

## Features

* Add and remove books
* Search books by title
* Display all books and users
* Borrow and return books
* Track availability of books
* Keep track of the total number of books

## Project Structure

The project is implemented using multiple source and header files:

* `LibraryBook` – represents a book in the library
* `LibraryUser` – abstract base class for users
* `Member` – library member who can borrow and return books
* `Librarian` – user who manages the book collection
* `LibrarySystem` – manages books and users

This structure helps keep the code modular and easier to follow.

## Design Overview

The project uses inheritance and polymorphism to represent different user types. An abstract base class is used to define common behavior for users. Vectors are used to store books and users dynamically, and class attributes are accessed through methods to maintain encapsulation.
