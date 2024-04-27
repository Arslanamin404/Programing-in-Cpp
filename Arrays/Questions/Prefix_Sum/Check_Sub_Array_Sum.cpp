/*
Check if we can partition the array into two sub arrays with
equal sum. More formally, check that the prefix sum of a part
of the array is equal to the suffix sum of rest of the array.
*/
#include <iostream>
#include <vector>
using namespace std;

bool isEqual_SubArray_Sum(vector<int> &arr)
{
    int total_sum = 0;
    for (int i = 0; i < arr.size(); i++)
        total_sum += arr[i];

    int prefix_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefix_sum += arr[i];

        // prefix Sum + Suffix Sum = Total Sum
        int suffix_sum = total_sum - prefix_sum;

        if (suffix_sum == prefix_sum)
            return true;
    }

    return false;
}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;

    vector<int> v1;
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v1.push_back(element);
    }

    if (isEqual_SubArray_Sum(v1))
        cout << "Yes, can be partitioned." << endl;
    else
        cout << "No, can not be partitioned." << endl;

    return 0;
}