#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void remove_duplicates(vector<int> &nums)
{
    // Step 1: Sort the vector to bring duplicates together
    sort(nums.begin(), nums.end());

    // Step 2: Use two pointers to remove duplicates
    int current = 0;
    int next = 1;

    while (next < nums.size())
    {
        if (nums[current] != nums[next])
        {
            // Move unique element to the correct position
            current++;
            nums[current] = nums[next];
        }
        next++; // Always increment next to check the next element
    }

    // Step 3: Resize the vector to remove duplicates and keep only unique elements
    nums.resize(current + 1);
}

int main()
{
    vector<int> vec = {2, 6, 2, 2, 4, 1, 5, 8, 1};

    remove_duplicates(vec);

    for (int elem : vec)
        cout << elem << " ";

    return 0;
}