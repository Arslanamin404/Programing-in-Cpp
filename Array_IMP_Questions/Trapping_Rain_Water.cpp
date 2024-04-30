/*
                        !| ------------------------------- |
                        ?|   TRAPPING RAIN WATER PROBLEM   |
                        !| ------------------------------- |
Given n non-negative integers representing the heights of building where the width of each
building is 1 unit.
TODO: Compute how much water it can trap after raining.

*Example 1:
Input:
    Size = 8
    Height = [4 2 0 5 2 6 2 3]
Output: 10

*Example 2:
Input:
    Size = 6
    Height = [4 2 0 3 2 5]
Output: 9
*/

#include <iostream>
#include <vector>

using namespace std;

int trap_water(vector<int> &height)
{
    // we will use 2 pointer approach
    int left_ptr = 0;
    int right_ptr = height.size() - 1;

    // store max from both left and right side
    int left_max = height[0];
    int right_max = height[right_ptr];

    // this will store final output
    int total_trapped_water = 0;

    while (left_ptr < right_ptr)
    {
        if (left_max <= right_max)
        {
            total_trapped_water += (left_max - height[left_ptr]);
            left_ptr++;
            left_max = max(left_max, height[left_ptr]);
        }
        else
        {
            total_trapped_water += (right_max - height[right_ptr]);
            right_ptr--;
            right_max = max(right_max, height[right_ptr]);
        }
    }

    return total_trapped_water;
}
int main()
{
    int n;
    cout << "SIZE: ";
    cin >> n;

    vector<int> heights;

    cout << "ENTER " << n << " ELEMENTS: " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        heights.push_back(element);
    }

    cout << trap_water(heights) << " units of water will be trapped." << endl;
    return 0;
}