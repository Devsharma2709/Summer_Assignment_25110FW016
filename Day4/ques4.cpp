#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << " Enter ending number: ";
    cin >> end;
    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";
    for (int num = start; num <= end; num++){
        int temp = num, digits = 0, sum = 0;
        while (temp > 0){
            digits++;
            temp /= 10;
        }
        temp = num;
        while (temp > 0){
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        if (sum == num)
        cout << num << " ";
    }
    return 0;
}