#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    cout << " Factor are: ";
    for(int i = 1 <= n; i++){
        if(n % i == 0)
        cout << i << " ";
    }
    return 0;
}