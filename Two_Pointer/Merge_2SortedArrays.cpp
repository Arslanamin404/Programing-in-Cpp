/*
Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n.

Input:
    arr l = [1 2 3]
    arr 2 = [4 5 6]
Output: arr = [1 2 3 4 5 6]

Input:
    arr 1 = [1 3 5]
    arr 2 = [2 4 6]
Output: arr = [1 2 3 4 5 6]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_arrays(vector<int> &arr1, vector<int> &arr2)
{
    int total_size = arr1.size() + arr2.size();
    vector<int> result;
    // result.reserve(total_size);
    
    int ptr1 = 0;
    int ptr2 = 0;

    // Iterate until both pointers reach the end of their respective arrays
    while (ptr1 < arr1.size() && ptr2 < arr2.size())
    {
        if (arr1[ptr1] < arr2[ptr2])
        {
            result.push_back(arr1[ptr1]);
            ptr1++;
        }
        else
        {
            result.push_back(arr2[ptr2]);
            ptr2++;
        }
    }

    // If there are remaining elements in arr1, append them to the result
    while (ptr1 < arr1.size())
    {
        result.push_back(arr1[ptr1]);
        ptr1++;
    }

    // If there are remaining elements in arr2, append them to the result
    while (ptr2 < arr2.size())
    {
        result.push_back(arr2[ptr2]);
        ptr2++;
    }

    return result;
}

int main()
{
    int m;
    cout << "SIZE vec1: ";
    cin >> m;
    vector<int> vec1;

    cout << "Enter " << m << " elements for vec1" << endl;
    for (int i = 0; i < m; i++)
    {
        int element;
        cin >> element;
        vec1.push_back(element);
    }

    int n;
    cout << "SIZE vec2: ";
    cin >> n;
    vector<int> vec2;

    cout << "Enter " << n << " elements for vec2" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        vec2.push_back(element);
    }

    vector<int> result = merge_arrays(vec1, vec2);
    for (auto elem : result)
        cout << elem << " ";

    return 0;
}