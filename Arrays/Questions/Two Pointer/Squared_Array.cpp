/*
TODO: Given an integer array sorted in non-decreasing order.
Return an array of the squares of each number sorted in non-decreasing order.
? Input [-10, -3, 2, 4, 5]
* Output [2, 4, 9, 16, 100]
*/

#include <iostream>
#include <vector>

using namespace std;

// Function to square each element in the vector and sort in non-decreasing order
void squared_array(vector<int> &vec)
{
    vector<int> answer;

    // 2 pointers
    int left_ptr = 0;
    int right_ptr = vec.size() - 1;

    while (left_ptr <= right_ptr)
    {
        if (abs(vec[left_ptr]) > abs(vec[right_ptr]))
        {
            answer.push_back(vec[left_ptr] * vec[left_ptr]);
            left_ptr++;
        }
        else
        {
            answer.push_back(vec[right_ptr] * vec[right_ptr]);
            right_ptr--;
        }
    }

    reverse(answer.begin(), answer.end());

    // printing squared array
    for (int element : answer)
        cout << element << " ";
}

int main()
{
    int n;
    cout << "Size of vector: ";
    cin >> n;

    vector<int> v;

    cout << "Enter " << n << " elements: " << endl;

    // taking input for array
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    // clearing console
    system("cls");

    cout << "\nOriginal Array: " << endl;
    for (int element : v)
        cout << element << " ";

    cout << "\nSquared Array: " << endl;
    squared_array(v);

    return 0;
}