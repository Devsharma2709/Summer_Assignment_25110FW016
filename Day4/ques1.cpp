#include <iostream>
using namespace std;
int main ()
{
    int n, first = 0, second = 1, next;
    cout << " Enter a number of terms: ";
    cin >> n;
    cout << "Fibonacci series: ";
    for (int i = 1; i <=  n; i++){
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}