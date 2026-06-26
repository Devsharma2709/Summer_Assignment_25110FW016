#include <iostream>
using namespace std;
int main(){
    int n; 
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    cout << "Duplicate elements are: ";
    bool found = false;
    for(int i = 0; i < n; i++)
    {
        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                alreadyPrinted = true;
                break;
            }
        }
        if(alreadyPrinted)
        continue; 
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }
    if(!found)
    cout << "No duplicate elements found. ";
    return 0;
}