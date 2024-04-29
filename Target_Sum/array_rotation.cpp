/*
* Rotate the given array by K steps, where k is the non negative.
! NOTE: K can be the greater than N as well, where N is the size of array
*/
#include <iostream>
#include <vector>
#include <algorithm> // Include the algorithm header for std::reverse

using namespace std;

// memory efficient
void efficient_rotation()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    int k = 2;
    k = k % vec.size(); // k can be greater than size

    cout << "\n------------" << endl;
    //* Original Vector
    for (int element : vec)
    {
        cout << element << " ";
    }
    cout << "\n------------" << endl;

    //* Reverse the entire vector
    reverse(vec.begin(), vec.end());
    for (int element : vec)
    {
        cout << element << " ";
    }
    cout << "\n------------" << endl;

    //* Reverse the first `k` elements of the vector
    reverse(vec.begin(), vec.begin() + k);
    for (int element : vec)
    {
        cout << element << " ";
    }
    cout << "\n------------" << endl;

    //* Reverse the remaining elements of the vector after the first `k` elements
    reverse(vec.begin() + k, vec.end());
    for (int element : vec)
    {
        cout << element << " ";
    }

    cout << "\n------------" << endl;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]); // size of array
    int k = 2;                                // rotation steps
    k = k % n;                                // K can be greater than n

    int answer_array[n];
    int j = 0;

    // inserting last K elements
    for (int i = n - k; i < n; i++)
        answer_array[j++] = array[i];

    // inserting first n-k elements
    for (int i = 0; i <= k; i++)
        answer_array[j++] = array[i];

    for (int i = 0; i < n; i++)
        cout << answer_array[i] << " ";

    cout << endl;

    efficient_rotation();

    return 0;
}