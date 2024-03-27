#include <iostream>
using namespace std;
int array_sum(int *arr, int size);
int main()
{
    int count;
    cout << "Size of an Array: ";
    cin >> count;
    int array[count];
    for (int i = 0; i < count; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Sum of array elements is: " << array_sum(array, count) << endl;
    return 0;
}

int array_sum(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}
