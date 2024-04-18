#include <iostream>
#include <vector>
using namespace std;

void remove_element(std::vector<int> &nums, int value)
{
    int slow_ptr = 0;
    int fast_ptr = 0;

    // Traverse the vector using the fast_ptr.
    while (fast_ptr < nums.size())
    {
        // If the current element at fast_ptr does not match the value to remove...
        if (nums[fast_ptr] != value)
        {
            // Place the non-matching element at slow_ptr and move slow_ptr forward.
            nums[slow_ptr] = nums[fast_ptr];
            slow_ptr++;
        }
        // Move fast_ptr to the next element regardless.
        fast_ptr++;
    }
    nums.resize(slow_ptr);
}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;

    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        vec.push_back(elem);
    }

    // value to delete
    int target;
    cout << "Value to delete from Array: ";
    cin >> target;

    remove_element(vec, target);

    for (auto elem : vec)
        cout << elem << " ";

    return 0;
}