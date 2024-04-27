#include <iostream>
using namespace std;

void reverse_array(int *arr, int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
}
int main()
{
    int n;
    cout << "Size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    // taking input for array
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // clearing console
    system("cls");

    // printing original array
    cout << "Original Array: " << endl;
    for (int elem : arr)
        cout << elem << " ";

    // function call
    reverse_array(arr, n);

    // printing reversed array
    cout << "\n\nReversed Array: " << endl;
    for (int elem : arr)
        cout << elem << " ";

    return 0;
}