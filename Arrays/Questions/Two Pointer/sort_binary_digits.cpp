/*
TODO: Sort an array of 0's and 1's using 2 pointer
? Input [1, 0, 1, 0, 0, 1, 1, 0]
* Output [0, 0, 0, 0, 1, 1, 1, 1]
*/
#include <iostream>
#include <vector>

using namespace std;

void sortZerosAndsOnes(vector<int> &vec)
{
    int count_zeroes = 0;

    // Counting Zeroes
    for (int elem : vec)
    {
        if (elem == 0)
            count_zeroes++;
    }

    // placing 0's and 1's at sorted position
    for (int i = 0; i < vec.size(); i++)
    {
        if (i < count_zeroes)
            vec[i] = 0;
        else
            vec[i] = 1;
    }
}

// Sort using 2 Pointers
void sort_0s_And_1s(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;
    while (start < end)
    {
        if (vec[start] == 1 && vec[end] == 0)
        {
            // vec[start] = 0;
            // vec[end] = 1;
            swap(vec[start], vec[end]);
            start++;
            end--;
        }

        else if (vec[start] == 0)
            start++;

        else
            end--;
    }
}

int main()
{
    int n;
    cout << "Size of vector: ";
    cin >> n;

    vector<int> v;
    cout << "Enter " << n << " binary digits (0's and 1's only): " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    // inefficient method
    sortZerosAndsOnes(v);

    // Efficient method (2 pointer Approach)
    sort_0s_And_1s(v);

    cout << "\nSorted Binary Digits (0's and 1's): " << endl;

    for (int ele : v)
        cout << ele << " ";

    return 0;
}