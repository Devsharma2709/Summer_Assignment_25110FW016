#include <iostream>
using namespace std;
int main(){
    int r , c;
    cout << "Enter number of rows and columns: ";
    vin >> r >> c;
    int A[r][c], B[r][c], sum[r][c];
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++)
    cin >> A[i][j];
    cout << "Enter elementsof second matrix:\n";
    for(int i =0; i < r; i++)
    for(int j = 0; j < c; j++)
    cin >> B[i][j];
    for(int i = 0; i < r; i++)
    for(int j = 0; j < c; j++)
    sum[i][j] = A[i][j] +B[i][j];
    cout << "Sum of matrix:\n";
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        cout << sum[i][j] << " ";
        cout << endl; 
    }
    return 0;
}