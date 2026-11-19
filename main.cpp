#include <iostream>
#include "library.h"
using namespace std;

vector<Book> books;

int main() {
    int choice;
    do {
        cout << "\n--- Library Management ---\n"
             << "1. Add Book\n2. Display Books\n3. Search Book\n"
             << "4. Issue/Return Book\n5. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueReturnBook(); break;
            case 5: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (choice != 5);
    return 0;
}