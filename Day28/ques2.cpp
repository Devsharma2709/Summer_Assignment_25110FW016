#include <iostream>
#include <string>
using namespace std;
int main() {
    int accountNo, choice;
    string name;
    float balance = 0.0, amount;
    cout << "===== Bank Account System =====\n";
    cout << "Enter Account Number: ";
    cin >> accountNo;
    cout << "Enter Account Holder Name: ";
    cin >> name;
    cout << "Enter Initial Balance: ";
    cin >> balance;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit Successful!" << endl;
                    cout << "Updated Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal Successful!" << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                } else {
                    cout << "Insufficient Balance or Invalid Amount!" << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the Bank Account System!" << endl;
                break;
            default:
                cout << "Invalid Choice! Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}