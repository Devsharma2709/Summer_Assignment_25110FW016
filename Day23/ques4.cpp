#include <iostream>
using namespace std;
int main() {
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char maxChar;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            maxChar = str[i];
        }
    }
    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << max << endl;
    return 0;
}