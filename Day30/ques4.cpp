#include <iostream>
#include <string>
using namespace std;
const int MAX = 100;
int roll[MAX];
string name[MAX];
float marks[MAX];
int n = 0;
void addStudent() {
    cout << "\nEnter Roll Number: ";
    cin >> roll[n];
    cout << "Enter Student Name: ";
    cin >> name[n];
    cout << "Enter Marks: ";
    cin >> marks[n];
    n++;
    cout << "Student record added successfully!\n";
}
void displayStudents() {
    if (n == 0) {
        cout << "No records found!\n";
        return;
    }
    cout << "\n----- Student Records -----\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No : " << roll[i] << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Marks   : " << marks[i] << endl;
        cout << "---------------------------\n";
    }
}
void searchStudent() {
    int r;
    bool found = false;
    cout << "Enter Roll Number to Search: ";
    cin >> r;
    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            cout << "\nStudent Found!\n";
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Student not found!\n";
}
        void updateMarks() {
    int r;
    bool found = false;
    cout << "Enter Roll Number: ";
    cin >> r;
    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            cout << "Current Marks: " << marks[i] << endl;
            cout << "Enter New Marks: ";
            cin >> marks[i];
            cout << "Marks updated successfully!\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Student not found!\n";
}
void deleteStudent() {
    int r;
    bool found = false;
    cout << "Enter Roll Number to Delete: ";
    cin >> r;
    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            for (int j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }
            n--;
            cout << "Student record deleted successfully!\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Student not found!\n";
}
int main() {
    int choice;
    do {
        cout << "\n========== Student Management System ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateMarks();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Thank You! Exiting Program...\n";
                break;
           default:
                cout << "Invalid Choice!\n";
        }
    } while (choice != 6);
    return 0;
}