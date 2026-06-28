#include <iostream>
#include <string>
using namespace std;
struct Book {
    int bookId;
    string title;
    string author;
};
int main() {
    Book books[100];
    int n = 0, choice, searchId;
    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nEnter Book ID: ";
                cin >> books[n].bookId;
                cout << "Enter Book Title: ";
                cin >> books[n].title;
                cout << "Enter Author Name: ";
                cin >> books[n].author;
                n++;
                cout << "Book added successfully!\n";
                break;
            case 2:
                if (n == 0) {
                    cout << "No books available!\n";
                } else {
                    cout << "\n----- Book Records -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Book ID : " << books[i].bookId << endl;
                        cout << "Title   : " << books[i].title << endl;
                        cout << "Author  : " << books[i].author << endl;
                        cout << "-------------------------\n";
                    }
                }
                break;
            case 3:
                cout << "Enter Book ID to Search: ";
                cin >> searchId;

                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (books[i].bookId == searchId) {
                            cout << "\nBook Found!\n";
                            cout << "Book ID : " << books[i].bookId << endl;
                            cout << "Title   : " << books[i].title << endl;
                            cout << "Author  : " << books[i].author << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Book not found!\n";
                }
                break;
            case 4:
                cout << "Exiting Library Management System...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}