/*
Given 2 sorted arrays, return the intersection of both the arrays.
The intersection of 2 arrays means all the elements which are present in both.

Example
Array 1: [1, 3, 4, 5, 5, 6, 6, 7]
Array 2: [2, 5, 6, 6, 7, 8]
Intersection: [5, 6, 6, 7]*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> intersection(vector<int> &A, vector<int> &B)
{
    vector<int> result;
    int i = 0, j = 0;
    while (i < A.size() && j < B.size())
    {
        if (A[i] == B[j])
        {
            result.push_back(A[i]);
            i++;
            j++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return result;
}

int main()
{
    vector<int> vec1 = {1, 3, 4, 5, 5, 6, 6, 7};
    vector<int> vec2 = {2, 5, 6, 6, 7, 8};
    vector<int> res = intersection(vec1, vec2);

    for (int elem : res)
        cout << elem << " ";

    return 0;
}