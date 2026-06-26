#include <iostream> 
using namespace std;
bool isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if(n % i == 0)
        sum += i;
    }
    return (sum == n);
}
int main()
{
    int num; cout << "Enter a number: ":
    cin >> num;
    if (isperfect(num))
    cout << num << " is a perfect number";
    else 
    cout << num << " is not a perfect number";
    return 0;
}