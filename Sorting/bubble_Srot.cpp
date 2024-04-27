#include <iostream>
#include <iomanip>
using namespace std;

void print_array(int *arr, int n);
void bubble_sort(int *arr, int n);
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
    bubble_sort(array, size);

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
// it checks and swaps adjacent elements
void bubble_sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}