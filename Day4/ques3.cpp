#include <iostream>
using namespace std;
int main()
{
    int num, temp, digits = 0;
    int sum = 0;
    cout <<"Enter a number: ";
    cin >> num;
    temp = num;
    while(temp > 0){
        digits++;
        temp /= 10;
    }
    temp = num;
    while(temp > 0){
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10
    }
    if (sum == num)
    cout << num << " is an armstrong number.";
    else
    cout << num << " is not an armstrong number.";
    return 0;
}