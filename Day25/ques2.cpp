#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    cout << "Common characters: ";
    for (int i = 0; i < str1.length(); i++) {
        bool printed = false;
        for (int k = 0; k < i; k++) {
            if (str1[i] == str1[k]) {
                printed = true;
                break;
            }
        }
        if (printed)
            continue;
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                cout << str1[i] << " ";
                break;
            }
        }
    }
    return 0;
}