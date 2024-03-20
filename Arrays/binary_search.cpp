#include <iostream>
using namespace std;
/*
*|*******************************************************************|
!|   For BINARY SEARCH its important that ARRAY must be SORTED       |
*|*******************************************************************|
*/

int binary_search(int *arr, int n, int key);
int main()
{
    system("cls");
    int size, key;
    cout << "Size of an Array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "arr [" << i << "]: ";
        cin >> arr[i];
    }
    cout << "\n---------------------------" << endl;
    cout << "Key to search: ";
    cin >> key;
    cout << "---------------------------" << endl;

    (binary_search(arr, size, key) != -1) ? cout << key << " found at index " << binary_search(arr, size, key) : cout << key << " not present in array" << endl;
    return 0;
}

int binary_search(int *arr, int n, int key)
{
    int start = 0, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (mid < key)
        {

            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
