#include <iostream>
using namespace std;
bool ispalindrome(int n){
    int original = n, reverse = 0;
    while (n > 0)
{
reverse = reverse * 10 + n % 10;
n /= 10;
}
return ( original == reverse);
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (ispalindrome(num))
    cout << num << " is a palindrome number";
    else
    cout << num << " is not a palindrome number";
    return 0;
}