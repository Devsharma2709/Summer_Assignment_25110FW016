#include <iostream>
using namespace std;
int main() {
    char str[100];
    int length = 0;
    bool palindrome = true;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    while (str[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
        cout << "The string is a Palindrome." << endl;
    else
        cout << "The string is Not a Palindrome." << endl;
    return 0;
}