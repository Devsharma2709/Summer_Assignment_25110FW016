#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "===== Voting Eligibility System =====" << endl;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "Congratulations! You are eligible to vote." << endl;
    } else {
        cout << "Sorry! You are not eligible to vote." << endl;
        cout << "You can vote after " << (18 - age) << " year(s)." << endl;
    }
    return 0;
}