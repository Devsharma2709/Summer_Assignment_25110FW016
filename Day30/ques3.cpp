#include <iostream>
#include <string>
using namespace std;

int main() {
    int empId[100];
    string empName[100];
    float salary[100];
    int n = 0, choice, id;
    bool found;
    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> empId[n];
            cout << "Enter Employee Name: ";
            cin >> empName[n];
            cout << "Enter Salary: ";
            cin >> salary[n];
            n++;
            cout << "Employee added successfully!\n";
            break;
        case 2:
            if (n == 0) {
                cout << "No employee records found!\n";
            } else {
                cout << "\n----- Employee Records -----\n";
                for (int i = 0; i < n; i++) {
                    cout << "Employee ID : " << empId[i] << endl;
                    cout << "Name        : " << empName[i] << endl;
                    cout << "Salary      : Rs. " << salary[i] << endl;
                    cout << "-----------------------------\n";
                }
            }
            break;
        case 3:
            cout << "Enter Employee ID to Search: ";
            cin >> id;
            found = false;
            for (int i = 0; i < n; i++) {
                if (empId[i] == id) {
                    found = true;
                    cout << "\nEmployee Found!\n";
                    cout << "Employee ID : " << empId[i] << endl;
                    cout << "Name        : " << empName[i] << endl;
                    cout << "Salary      : Rs. " << salary[i] << endl;
                    break;
                }
            }
            if (!found)
                cout << "Employee not found!\n";
            break;
        case 4:
            cout << "Enter Employee ID: ";
            cin >> id;
            found = false;
            for (int i = 0; i < n; i++) {
                if (empId[i] == id) {
                    found = true;
                    cout << "Current Salary: Rs. " << salary[i] << endl;
                    cout << "Enter New Salary: ";
                    cin >> salary[i];
                    cout << "Salary updated successfully!\n";
                    break;
                }
            }
            if (!found)
                cout << "Employee not found!\n";
            break;
        case 5:
            cout << "Exiting Mini Employee Management System...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
    return 0;
}