#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 5, 87, 4};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    // ##############################################################
    //  taking input form user
    cout << "\n-----------------------------------------------------" << endl;
    int size;
    cout << "Size of array: ";
    cin >> size;
    int new_arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> new_arr[i];
    }
    cout << "\n-----------------------------------------------------" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << new_arr[i] << " ";
    }
    cout << "\n-----------------------------------------------------" << endl;

    return 0;
}