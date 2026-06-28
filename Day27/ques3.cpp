#include <iostream>
#include <string>
using namespace std;
int main() {
    int empId;
    string empName;
    float basicSalary, hra, da, grossSalary;
    cout << "===== Salary Management System =====\n";
    cout << "Enter Employee ID: ";
    cin >> empId;
    cout << "Enter Employee Name: ";
    cin >> empName;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    hra = basicSalary * 0.20;   // 20% of Basic Salary
    da = basicSalary * 0.10;    // 10% of Basic Salary
    grossSalary = basicSalary + hra + da;
    cout << "\n===== Salary Details =====\n";
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << empName << endl;
    cout << "Basic Salary  : Rs. " << basicSalary << endl;
    cout << "HRA (20%)     : Rs. " << hra << endl;
    cout << "DA (10%)      : Rs. " << da << endl;
    cout << "Gross Salary  : Rs. " << grossSalary << endl;
    return 0;
}