#include <iostream> 
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    int maxFreq = 0;
    int element;
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i +1; j < n; j++)
        {
            if(arr[i] == arr[j])
            cout++;
        }
        if(cout > maxFreq)
        {
            maxFreq = cout;
            element = arr[i;]
        }
    }
    cout << "Element with maximum Frequency = " << element << endl;
    cout << "Frequency = " << maxFreq;
    return 0;
}