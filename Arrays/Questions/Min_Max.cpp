#include <iostream>
using namespace std;

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

    // set 0th element to min and max then compare
    int min_element = arr[0], max_element = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
    }
    cout << "\n------------------------------------------------" << endl;
    cout << "MIN ELEMENT: " << min_element << endl
         << "MAX ELEMENT: " << max_element << endl;
    cout << "------------------------------------------------" << endl;

    return 0;
}