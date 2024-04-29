// Find the total number of triplets in the array whose sum is equal to the given value x
#include <iostream>
using namespace std;
void triplet_targetSum(int *arr, int n, int key);
int main()
{
    int x, size;
    cout << "Size of array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    system("cls");
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nValue of X: ";
    cin >> x;

    triplet_targetSum(arr, size, x);

    return 0;
}

void triplet_targetSum(int *arr, int n, int key)
{
    int triplets = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == key)
                {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")";
                    triplets++;
                }
            }
        }
    }
    cout << "\nTheir are " << triplets << " total number of triplets whose sum = " << key << endl;
}
