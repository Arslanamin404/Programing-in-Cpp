#include <iostream>
#include <iomanip>
using namespace std;
void print_array(int *arr, int n);
void selection_sort(int *arr, int n);
int main()
{
    int size;
    cout << "Size of Array: ";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Array [" << i << "]: ";
        cin >> array[i];
    }
    system("cls");
    // array before sorting
    cout << "\n|-------------------------------|" << endl;
    cout << "|\t Unsorted Array \t|" << endl;
    cout << "|-------------------------------|" << endl;

    print_array(array, size);

    // this function will sort the array
    selection_sort(array, size);

    // Now the array is sorted
    cout << "\n\n|-------------------------------|" << endl;
    cout << "|\t Sorted Array \t\t|" << endl;
    cout << "|-------------------------------|" << endl;
    print_array(array, size);
    cout << "\n---------------------------------" << endl;

    return 0;
}
void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << arr[i] << ",";
    }
}
void selection_sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}