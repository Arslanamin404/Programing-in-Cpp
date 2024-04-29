/*
!| ----------------------------------------------- |
!| Maximum Difference Between Increasing Elements  |
!| ----------------------------------------------- |
Given an array of nums of size n, find the maximum difference between nums[i] and nums[j]
(i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].

TODO: Return the maximum difference. If no such i and j exists, return -1.

*Example 1:
Input: nums = [7 1 5 4]
Output: 4
Explanation:
The maximum difference occurs with i = 1 and j = 2, nums[j] - nums[i] = 5 - 1 = 4.
Note that with i = 1 and j = 0, the difference nums[j] - nums[i] = 7 - 1 = 6, but i > j, so it is not valid.

*Example 2:
Input: nums = [9 4 3 2]
Output: -1
Explanation:
There is no i and j such that i < j and nums[i] < nums[j].

*Example 3:
Input: nums = [1 5 2 10]
Output: 9
Explanation:
The maximum difference occurs with i = 0 and j = 3, nums[j] - nums[i] = 10 - 1 = 9.
*/

#include <iostream>
#include <vector>
using namespace std;

int max_difference(vector<int> &arr)
{
    // MAX SUFFIX number
    int suffix_max = arr[arr.size()-1];

    // MAX DIFFERENCE found so far
    int max_diff = INT_MIN;

    for (int i = arr.size() - 2; i >= 0; i--)
    {
        suffix_max = max(suffix_max, arr[i]);
        max_diff = max(max_diff, suffix_max - arr[i]);
    }
    return (max_diff > 0) ? max_diff : -1;
}

int main()
{
    system("cls");
    int n;
    cout << "SIZE: ";
    cin >> n;

    vector<int> vec;

    cout << "Enter " << n << " elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        vec.push_back(elem);
    }

    cout << "MAX DIFFERENCE: " << max_difference(vec) << endl;

    return 0;
}