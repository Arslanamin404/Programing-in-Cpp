/*
TODO: Given an array move all the even integers at beginning of the array followed by akk the odd integers.
The relative order of odd or even integers does not matter. Return an array that satisfies the condition.
? Input [1, 2, 3, 4, 5, 6]
* Output [6, 2, 4, 3, 5, 1]
*/
#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &vec)
{
    int start = 0;
    int end = vec.size() - 1;

    while (start < end)
    {
        if (vec[start] % 2 != 0 && vec[end] % 2 == 0)
        {
            swap(vec[start], vec[end]);
            start++, end--;
        }
        else if (vec[start] % 2 == 0)
            start++;
        else
            end--;
    }
}

int main()
{
    // clearing console
    system("cls");

    int n;
    cout << "Size of Vector: ";
    cin >> n;

    vector<int> v;

    // taking input in vector
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    // function call
    sort(v);

    cout << "\n-----------------------" << endl;

    // printing final output
    for (int elem : v)
        cout << elem << " ";

    cout << "\n-----------------------" << endl;

    return 0;
}