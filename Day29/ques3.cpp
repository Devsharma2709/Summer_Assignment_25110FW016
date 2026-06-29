#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str, temp;
    int choice;
    cout << "Enter a string: ";
    cin >> str;
    do {
        cout << "\n===== Menu-Driven String Operations =====\n";
        cout << "1. Find String Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Convert to Lowercase\n";
        cout << "5. Check Palindrome\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Length of String = " << str.length() << endl;
            break;
        case 2:
            temp = str;
            reverse(temp.begin(), temp.end());
            cout << "Reversed String = " << temp << endl;
            break;
        case 3:
            temp = str;
            for (int i = 0; i < temp.length(); i++) {
                temp[i] = toupper(temp[i]);
            }
            cout << "Uppercase String = " << temp << endl;
            break;
        case 4:
            temp = str;
            for (int i = 0; i < temp.length(); i++) {
                temp[i] = tolower(temp[i]);
            }
            cout << "Lowercase String = " << temp << endl;
            break;
        case 5:
            temp = str;
            reverse(temp.begin(), temp.end());
            if (str == temp)
                cout << "The string is a Palindrome." << endl;
            else
                cout << "The string is not a Palindrome." << endl;
            break;
        case 6:
            cout << "Exiting Program..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);
    return 0;
}