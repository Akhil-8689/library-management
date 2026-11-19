#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>

struct Book {
    int id;
    std::string title;
    std::string author;
    bool issued;
};

extern std::vector<Book> books;

void addBook();
void displayBooks();
void searchBook();
void issueReturnBook();
#endif