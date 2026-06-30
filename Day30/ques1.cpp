#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll[100];
    string name[100];
    float marks[100];
    int n = 0, choice, searchRoll;
    do {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Student Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "\nEnter Roll Number: ";
            cin >> roll[n];
            cout << "Enter Student Name: ";
            cin >> name[n];
            cout << "Enter Marks: ";
            cin >> marks[n];
            n++;
            cout << "Student record added successfully!\n";
            break;
        case 2:
            if (n == 0) {
                cout << "No student records found!\n";
            } else {
                cout << "\n----- Student Records -----\n";
                for (int i = 0; i < n; i++) {
                    cout << "Roll Number : " << roll[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                    cout << "----------------------------\n";
                }
            }
            break;
        case 3:
            cout << "Enter Roll Number to Search: ";
            cin >> searchRoll;
            {
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (roll[i] == searchRoll) {
                        cout << "\nStudent Found!\n";
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Student record not found!\n";
            }
            break;
        case 4:
            cout << "Exiting Student Record System...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}