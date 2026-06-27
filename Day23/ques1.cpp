#include <iostream>
using namespace std;
int main() {
    char str[100];
    int count;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++) {
        count = 0;
        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << "First non-repeating character: " << str[i] << endl;
            return 0;
        }
    }
    cout << "No non-repeating character found." << endl;
    return 0;
}