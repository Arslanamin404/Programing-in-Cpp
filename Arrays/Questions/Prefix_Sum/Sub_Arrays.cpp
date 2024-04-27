// print all the possible sub arrays
#include <iostream>
#include <vector>

using namespace std;

void generate_subArrays(vector<int> &nums)
{
    cout << "Total number of subarrays: " << nums.size() * (nums.size() + 1) / 2 << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size(); j++)
        {
            cout << "[ ";
            for (int k = i; k <= j; k++)
            {
                cout << nums[k] << " ";
            }

            cout << "]";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;

    vector<int> arr;
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        arr.push_back(element);
    }

    generate_subArrays(arr);
    return 0;
}