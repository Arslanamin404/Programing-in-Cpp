#include <iostream>
using namespace std;

int linear_search(int *arr, int size, int key);
int main()
{
    system("cls");
    int n, key;
    cout << "Size of an Array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr [" << i << "]: ";
        cin >> arr[i];
    }
    cout << "\n---------------------------" << endl;
    cout << "Key to search: ";
    cin >> key;
    cout << "---------------------------" << endl;

    // ternary operator
    (linear_search(arr, n, key) != -1) ? cout << key << " found at index " << linear_search(arr, n, key) : cout << key << " not present in array" << endl;
    return 0;
}

int linear_search(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
