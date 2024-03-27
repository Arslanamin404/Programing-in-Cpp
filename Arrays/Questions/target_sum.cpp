// Find the total number of pairs in the array whose sum is equal to the given value x
#include <iostream>
using namespace std;

int main()
{
    int x, size;
    cout << "Size of array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nValue of X: ";
    cin >> x;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (arr[i] + arr[j] == x)
                cout << "(" << arr[i] << "," << arr[j] << ")";
        }
    }

    return 0;
}