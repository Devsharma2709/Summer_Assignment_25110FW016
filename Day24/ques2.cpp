#include <iostream>
using namespace std;
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Compressed string: ";
    for (int i = 0; str[i] != '\0'; ) {
        int count = 1;
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }
        cout << str[i] << count;
        i++;
    }
    cout << endl;
    return 0;
}