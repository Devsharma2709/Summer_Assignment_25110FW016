#include <iostream>
#include <string>
using namespace std;
struct Employee {
    int id;
    string name;
    float salary;
};
int main() {
    Employee emp[100];
    int n = 0, choice, searchId;
    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> emp[n].id;
                cout << "Enter Employee Name: ";
                cin >> emp[n].name;
                cout << "Enter Employee Salary: ";
                cin >> emp[n].salary;
                n++;
                cout << "Employee record added successfully!\n";
                break;
            case 2:
                if (n == 0) {
                    cout << "No employee records found!\n";
                } else {
                    cout << "\n----- Employee Records -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Employee ID : " << emp[i].id << endl;
                        cout << "Name        : " << emp[i].name << endl;
                        cout << "Salary      : Rs. " << emp[i].salary << endl;
                        cout << "-----------------------------\n";
                    }
                }
                break;
            case 3:
                cout << "Enter Employee ID to Search: ";
                cin >> searchId;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (emp[i].id == searchId) {
                            cout << "\nEmployee Found!\n";
                            cout << "Employee ID : " << emp[i].id << endl;
                            cout << "Name        : " << emp[i].name << endl;
                            cout << "Salary      : Rs. " << emp[i].salary << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Employee record not found!\n";
                }
                break;
            case 4:
                cout << "Exiting Employee Management System...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}