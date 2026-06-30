#include <iostream>
#include <string>
using namespace std;
int main() {
    int bookId[100];
    string title[100];
    bool issued[100];
    int n = 0, choice, id;
    bool found;
    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter Book ID: ";
            cin >> bookId[n];
            cout << "Enter Book Title: ";
            cin >> title[n];
            issued[n] = false;
            n++;
            cout << "Book added successfully!\n";
            break;
        case 2:
            if (n == 0) {
                cout << "No books available!\n";
            } else {
                cout << "\n----- Book List -----\n";
                for (int i = 0; i < n; i++) {
                    cout << "Book ID : " << bookId[i] << endl;
                    cout << "Title   : " << title[i] << endl;
                    if (issued[i])
                        cout << "Status  : Issued" << endl;
                    else
                        cout << "Status  : Available" << endl;

                    cout << "----------------------\n";
                }
            }
            break;
        case 3:
            cout << "Enter Book ID to Issue: ";
            cin >> id;
            found = false;
            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    found = true;
                    if (!issued[i]) {
                        issued[i] = true;
                        cout << "Book issued successfully!\n";
                    } else {
                        cout << "Book is already issued!\n";
                    }
                    break;
                }
            }
            if (!found)
                cout << "Book not found!\n";
            break;
        case 4:
            cout << "Enter Book ID to Return: ";
            cin >> id;
            found = false;
            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    found = true;
                    if (issued[i]) {
                        issued[i] = false;
                        cout << "Book returned successfully!\n";
                    } else {
                        cout << "Book is already available!\n";
                    }
                    break;
                }
            }
            if (!found)
                cout << "Book not found!\n";
            break;
        case 5:
            cout << "Exiting Mini Library System...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
    return 0;
}