/*
Given an array, note that return the PrefixSum / RunningSum in the 
same array without creating a new array.
|----------------------------------------------------------------|
|                   Input [5, 4, 1, 2, 3]                        |
|     Output [5, 5+4=9, 5+4+1=10, 5+4+1+2=12, 5+4+1+2+3=15]      |
|                  Output [5, 9, 10, 12, 15]                     |
|----------------------------------------------------------------|
*/

#include <iostream>
#include <vector>
using namespace std;

void PrefixSum(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
        nums[i] += nums[i - 1];
}

int main()
{
    vector<int> v1 = {5, 4, 1, 2, 3};
    PrefixSum(v1);

    for (auto elem : v1)
        cout << elem << " ";

    return 0;
}