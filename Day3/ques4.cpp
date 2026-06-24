#include <iostream>
using namespace std;
int main;{
    int a, b, gcd, x, y;
    cout << "Enter two numbers:";
    cin >> a >> b;
    x = a;
    y = b;
    while (y != 0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
     int lcm = (a * b) / gcd;
     cout << "LCM = " << lcm;
      return 0;
}