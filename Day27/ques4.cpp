#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;
    cout << "===== Marksheet Generation System =====\n";
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cout << "Enter marks of 5 subjects (out of 100):\n";
    cout << "Subject 1: ";
    cin >> m1;
    cout << "Subject 2: ";
    cin >> m2;
    cout << "Subject 3: ";
    cin >> m3;
    cout << "Subject 4: ";
    cin >> m4;
    cout << "Subject 5: ";
    cin >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';
    cout << "\n========== MARKSHEET ==========\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;
    cout << "-------------------------------\n";
    cout << "Subject 1 : " << m1 << endl;
    cout << "Subject 2 : " << m2 << endl;
    cout << "Subject 3 : " << m3 << endl;
    cout << "Subject 4 : " << m4 << endl;
    cout << "Subject 5 : " << m5 << endl;
    cout << "-------------------------------\n";
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;
    if (percentage >= 40)
        cout << "Result      : PASS" << endl;
    else
        cout << "Result      : FAIL" << endl;
    return 0;
}