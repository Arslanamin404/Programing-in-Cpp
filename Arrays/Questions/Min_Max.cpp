#include <iostream>
using namespace std;

int Find_MAX(int *arr, int count)
{
    int max = INT_MIN; // Min Value of INT (constant)
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int Find_MIN(int *arr, int count)
{
    int min = INT_MAX; // MAX Value of INT (constant)
    for (int i = 0; i < count; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main()
{
    int size;
    cout << "Size of array: ";
    cin >> size;
    int arr[size];

    // taking input for array
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\n------------------------------------------------" << endl;
    cout << "MIN ELEMENT: " << Find_MIN(arr, size) << endl
         << "MAX ELEMENT: " << Find_MAX(arr, size) << endl;
    cout << "------------------------------------------------" << endl;

    return 0;
}