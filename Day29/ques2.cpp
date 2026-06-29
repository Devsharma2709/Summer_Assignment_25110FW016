#include <iostream>
using namespace std;
int main() {
    int arr[100], n = 0;
    int choice, key;
    do {
        cout << "\n===== Menu Driven Array Operations =====\n";
        cout << "1. Insert Elements\n";
        cout << "2. Display Array\n";
        cout << "3. Find Maximum Element\n";
        cout << "4. Find Minimum Element\n";
        cout << "5. Calculate Sum of Elements\n";
        cout << "6. Search an Element\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Enter number of elements: ";
            cin >> n;
            cout << "Enter array elements:\n";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            break;
        case 2:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                cout << "Array Elements: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
            break;
        case 3:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                int max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                cout << "Maximum Element = " << max << endl;
            }
            break;
        case 4:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min)
                        min = arr[i];
                }
                cout << "Minimum Element = " << min << endl;
            }
            break;
        case 5:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                int sum = 0;
                for (int i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum of Elements = " << sum << endl;
            }
            break;
        case 6:
            if (n == 0) {
                cout << "Array is empty!\n";
            } else {
                cout << "Enter element to search: ";
                cin >> key;
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at position " << i + 1 << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Element not found!" << endl;
            }
            break;
        case 7:
            cout << "Exiting Program..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 7);
    return 0;
}