/*
Given an array of integers of size N. Answer Q queries where
you need to print the sum of values in a given range of indices
from L to R (both included).
!|----------------------------------------------------------------|
!| Note: The values of L and R in queries follow 1-based indexing |
!|----------------------------------------------------------------|
*/

/*
*| ----------------------------------- |
*|               DRY RUN               |
*| ----------------------------------- |
?|             Size (n) = 5            |
?|          input: 0 5 1 2 3 4         |
?|        prefixSum: 0 5 6 8 11 15     |
 | ----------------------------------- |
!|       Number of Queries = 2         |
*|               Query 1               |
 | ----------------------------------- |
*|              L=1, R=3               |
*|       ans = nums[R]-nums[L-1]       |
*|       ans = nums[3]-nums[1-1]       |
!|           Output = 8-0 = 8          |
 | ----------------------------------- |
*|               Query 2               |
 | ----------------------------------- |
*|              L=2, R=5               |
*|       ans = nums[R]-nums[L-1]       |
*|       ans = nums[5]-nums[2-1]       |
!|           Output = 15-5 = 10        |
 | ----------------------------------- |
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Size of Array: ";
    cin >> n;
    vector<int> nums(n + 1, 0);
    cout << "Enter " << n << " elements: " << endl;

    // take input for array
    for (int i = 1; i <= n; i++)
        cin >> nums[i];

    // calculate prefix sum
    for (int i = 1; i <= n; i++)
        nums[i] += nums[i - 1];

    // No. of queries
    int q;
    cout << "\nNumber of Queries: ";
    cin >> q;
    cout << "-------------------------" << endl;

    // Output
    while (q--)
    {
        int l, r;
        cout << "Values of L and R: ";
        cin >> l >> r;
        // ans = prefixSum[r]-prefixSum[l-1]
        int ans = nums[r] - nums[l - 1];
        cout << "\tSUM: " << ans << endl;
    }

    return 0;
}