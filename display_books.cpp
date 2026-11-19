#include <iostream>
#include "library.h"
using namespace std;

void displayBooks() {
    if (books.empty()) {
        cout << "No books available.\n";
        return;
    }
    for (const Book& b : books) {
        cout << b.id << " | " << b.title << " | " << b.author
             << " | " << (b.issued ? "Issued" : "Available") << "\n";
    }
}
