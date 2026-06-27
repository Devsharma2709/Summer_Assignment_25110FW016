#include <iostream>
using namespace std;
int main() {
    char str[100], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0;
    cout << "Enter a sentence: ";
    cin.getline(str, 100);
    while (true) {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                for (int k = 0; k < len; k++) {
                    longest[k] = str[i - len + k];
                }
                longest[len] = '\0';
            }
            len = 0;
        }
        if (str[i] == '\0')
            break;
        i++;
    }
    cout << "Longest word: " << longest << endl;
    cout << "Length: " << maxLen << endl;
    return 0;
}