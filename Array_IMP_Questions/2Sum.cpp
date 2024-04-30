/*
Given a vector sorted in increasing order of n size and an integer X, find if there exists
a pair in the array whose sum is exactly X.

Input:
    size = 5
    [-1 0 1 2 3]
    x=2
Output: Yes

Input:
    size = 4
    [1 2 3 4]
    x=9
Output: No
*/

#include <iostream>
#include <vector>
using namespace std;

bool two_sum(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        if (nums[start] + nums[end] == target)
        {
            return true;
        }
        else if (nums[start] + nums[end] < target)
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

    (two_sum(vec, x)) ? cout << "YES" : cout << "NO";

    return 0;
}