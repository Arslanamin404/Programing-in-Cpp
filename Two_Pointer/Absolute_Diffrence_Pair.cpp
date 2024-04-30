/*
Given a vector sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose absolute difference is exactly x.

Input:
    [5 10 15 20 26]
    x=10
Output: Yes

Input:
    [5 6 7 8 9]
    x=4
Output: Yes

Input:
    [9 23 45 69 78]
    =56
Output: No
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool absolute_difference(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end()); // Optional
    
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        if (abs(nums[start] - nums[end]) == target)
        {
            return true;
        }
        else if (abs(nums[start] - nums[end]) < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "SIZE: ";
    cin >> n;

    vector<int> vec;

    cout << "ENTER " << n << " ELEMENTS: " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }

    int x;
    cout << "X: ";
    cin >> x;

    (absolute_difference(vec, x)) ? cout << "YES" : cout << "NO";

    return 0;
}