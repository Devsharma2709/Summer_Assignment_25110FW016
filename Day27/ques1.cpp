#include <iostream>
#include <string>
using namespace std;
struct Student {
    int rollNo;
    string name;
    float marks;
};
int main() {
    Student s[100];
    int n = 0, choice, roll;
    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> s[n].rollNo;
                cout << "Enter Name: ";
                cin >> s[n].name;
                cout << "Enter Marks: ";
                cin >> s[n].marks;
                n++;
                cout << "Student record added successfully!\n";
                break;
            case 2:
                if (n == 0) {
                    cout << "No student records found!\n";
                } else {
                    cout << "\n----- Student Records -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Roll No: " << s[i].rollNo << endl;
                        cout << "Name    : " << s[i].name << endl;
                        cout << "Marks   : " << s[i].marks << endl;
                        cout << "---------------------------\n";
                    }
                }
                break;
            case 3:
                cout << "Enter Roll Number to Search: ";
                cin >> roll;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (s[i].rollNo == roll) {
                            cout << "\nStudent Found!\n";
                            cout << "Roll No: " << s[i].rollNo << endl;
                            cout << "Name   : " << s[i].name << endl;
                            cout << "Marks  : " << s[i].marks << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Student record not found!\n";
                }
                break;
            case 4:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice! Try Again.\n";
        }
    } while (choice != 4);
    return 0;
}