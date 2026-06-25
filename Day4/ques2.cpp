#include <iostream>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next;
    cout <<"Enter n :";
    cin >> n;
    cout << "Nth fibonacci term = 0";
    else if (n == 2)
    cout << "Nth fibonacci term = 1";
    else{
        for (int i = 3; i <= n; i++){
            next = first + second;
            first = second;
            second = first;
        }
        cout << "Nth fibonacci term = " << second ;
    }
    return 0;
}