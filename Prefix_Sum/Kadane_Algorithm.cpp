/*
Given an array of N integers. Find the contiguous sub-array(containing at least one number)
which has the maximum sum and return its sum.

*Input: nums = [1,2,3,-2,5]
Output: 9
Explanation: Max SubArray sum is 9

*Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
*/

/*
Prefix_Sum = max_i = arr[0]

3 Steps of Kadane's Algorithm:
    STEP 01: Prefix_Sum += arr[i]
    STEP 02: max_i = max(max_i,Prefix_Sum)
    STEP 03: (Prefix_Sum<0)? Prefix_Sum = 0

return max_i
*/

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int prefix_sum = nums[0];
    int max_so_far = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        prefix_sum += nums[i];
        max_so_far = max(max_so_far, prefix_sum);
        if (prefix_sum < 0)
            prefix_sum = 0;
    }
    return max_so_far;
}

int main()
{
    int n;
    cout << "SIZE: ";
    cin >> n;

    vector<int> v1;

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v1.push_back(element);
    }

    // function call
    cout << "Maximum contiguous sum is " << maxSubArray(v1) << endl;
    return 0;
}