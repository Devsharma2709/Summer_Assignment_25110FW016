#include <iostream>
using namespace std;
int main(){
    int start, end;
    cout << "Enter starting number:";
    cin >> start;
    
    cout << "Enter ending number:";
    cin >> end;
    cout << "Prime numbers between" << start << " and " << end << " are:\n";
    for (int num = start; num <= end; num++) {
        bool is prime = true;
        if (num <= 1)
        isPrime = false;
        else {
            for (int i = 2; i <= num / 2; i++){
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        cout << num << " ";
    }
    return 0;
}