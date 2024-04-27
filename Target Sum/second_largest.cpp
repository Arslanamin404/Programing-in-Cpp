#include <iostream>
using namespace std;

int find_second_largest(int *arr, int count)
{
    int largest = INT_MIN; // Min Value of INT (constant)
    int second_largest = INT_MIN;

    // find largest in first traversal
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    // find second largest in second traversal
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > second_largest && arr[i] != largest)
            second_largest = arr[i];
    }
    return second_largest;
}

int main()
{
    int arr[] = {15, 23, 4, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int second_largest = find_second_largest(arr, size);
    cout << second_largest << endl;
    return 0;
}