#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the order of the square matrix: ";
    cin >> n;
    int matrix[10][10];
    bool symmetric = true;
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric)
            break;
    }
    if (symmetric)
        cout << "The matrix is Symmetric.";
    else
        cout << "The matrix is Not Symmetric.";
    return 0;
}