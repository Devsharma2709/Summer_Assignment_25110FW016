#include <iostream>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                cout << "First repeating character: " << str[i] << endl;
                return 0;
            }
        }
    }
    cout << "No repeating character found." << endl;
    return 0;
}