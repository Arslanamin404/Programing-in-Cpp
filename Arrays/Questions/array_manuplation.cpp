/* Find the unique number in a given array where all the elements are being repeated twice with one value being unique.
!|---------------------------------|
*|   INPUT = [1,12,51,2,1,12,51]   |
*|          OUTPUT = 2             |
!|---------------------------------|
*/

/*
!|-----------------------------------------|
*|      XOR has a useful property where    |
*|          x ^ x = 0 and x ^ 0 = x        |
?|       eg:  1 ^ 1 = 0 and 1 ^ 0 = 1      |
!|-----------------------------------------|
*/

#include <iostream>
using namespace std;
// most efficient method
int findUniqueNumber(int *arr, int size)
{
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique = unique ^ arr[i];
    }
    return unique;
}

// Inefficient Method
void findUniqueElement(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                arr[i] = arr[j] = -1;
        }
    }
}

int main()
{
    int arr[7] = {1, 12, 51, 2, 1, 12, 51};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Efficient Method
    cout << "Unique Element: " << findUniqueNumber(arr, size) << endl;

    // InEfficient Method
    findUniqueElement(arr, size);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != (-1))
            cout << "Unique Element: " << arr[i];
    }

    return 0;
}