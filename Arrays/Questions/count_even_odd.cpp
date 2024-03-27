// Count number of even and odd elements in an array
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int size, even = 0, odd = 0;
    cout << "SIZE: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "------------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        (arr[i] % 2 == 0) ? even++ : odd++;
    }
    cout << "Number of odd elemets: " << odd << endl;
    cout << "Number of even elemets: " << even << endl;
    cout << "------------------------------------" << endl;

    return 0;
}