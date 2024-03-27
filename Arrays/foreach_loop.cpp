#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for (int &element : arr)
    {
        cout << "Element: ";
        cin >> element;
    }
    
    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}