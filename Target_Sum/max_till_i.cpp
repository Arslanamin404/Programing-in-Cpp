/*
!| -------------------------------------------------------|
*|   WAP to find the (Max till i'th index) of an array    |
?|            Input: [5, 8, 2, 10, 4]                     |
?|              Output: 5 8 8 10 10                       |
!| -------------------------------------------------------|
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> my_arr(5), result;
    // taking input for
    for (int i = 0; i < my_arr.size(); i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> my_arr[i];
    }

    int max_num = INT_MIN;

    for (int i = 0; i < my_arr.size(); i++)
    {
        max_num = max(max_num, my_arr[i]);
        result.push_back(max_num);
    }

    for (int element : result)
        cout << element << " ";

    return 0;
}