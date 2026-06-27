#include <iostream>
using namespace std;
int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0};
    int i;
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    for (i = 0; str1[i] != '\0'; i++)
        count1[(int)str1[i]]++;
    for (i = 0; str2[i] != '\0'; i++)
        count2[(int)str2[i]]++;
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            cout << "The strings are Not Anagrams." << endl;
            return 0;
        }
    }
    cout << "The strings are Anagrams." << endl;
    return 0;
}