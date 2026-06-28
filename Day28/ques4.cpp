#include <iostream>
#include <string>
using namespace std;
struct Contact {
    string name;
    string phone;
};
int main() {
    Contact contacts[100];
    int n = 0, choice;
    string searchName;
    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact by Name\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nEnter Contact Name: ";
                cin >> contacts[n].name;
                cout << "Enter Phone Number: ";
                cin >> contacts[n].phone;
                n++;
                cout << "Contact added successfully!\n";
                break;
            case 2:
                if (n == 0) {
                    cout << "No contacts found!\n";
                } else {
                    cout << "\n----- Contact List -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Name : " << contacts[i].name << endl;
                        cout << "Phone: " << contacts[i].phone << endl;
                        cout << "------------------------\n";
                    }
                }
                break;
            case 3:
                cout << "Enter Contact Name to Search: ";
                cin >> searchName;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (contacts[i].name == searchName) {
                            cout << "\nContact Found!\n";
                            cout << "Name : " << contacts[i].name << endl;
                            cout << "Phone: " << contacts[i].phone << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Contact not found!\n";
                }
                break;
            case 4:
                cout << "Exiting Contact Management System...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}