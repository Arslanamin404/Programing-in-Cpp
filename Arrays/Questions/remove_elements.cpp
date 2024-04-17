#include <iostream>
using namespace std;

void remove_element(int *arr, int &size, int element)
{
    int shiftCount = 0; // To count the number of shifts needed

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            shiftCount++; // Increment shift count for each occurrence of the element
        else
            arr[i - shiftCount] = arr[i]; // Shift the element left by 'shiftCount' positions to overwrite occurrences of 'element'
    }

    // Reduce the size of the array by the number of occurrences of 'element'
    size -= shiftCount;
}
void print_array(int *arr, int count)
{
    for (int i = 0; i < count; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {1, 12, 51, 2, 1, 12, 51};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of Elements: " << size << endl;
    print_array(arr, size);

    remove_element(arr, size, 51);
    remove_element(arr, size, 1);

    cout << "\n=========================================" << endl;
    cout << "Number of Elements: " << size << endl;

    print_array(arr, size);
    return 0;
}