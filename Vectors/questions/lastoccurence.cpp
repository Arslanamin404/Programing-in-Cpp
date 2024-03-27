// wap to find the last occurrence of an element in a array/vector
#include <iostream>
#include <vector>
using namespace std;
int last_occurrence(vector<int> vec, int key);
int main()
{
    vector<int> vec1;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cout << "Element " << i << ": ";
        cin >> element;
        vec1.push_back(element);
    }

    int search;
    cout << "Enter search value: ";
    cin >> search;
    if (last_occurrence(vec1, search))
        cout << "Last occurrence of " << search << " is at index " << (last_occurrence(vec1, search)) << endl;
    else
        cout << "Not found in vector" << endl;

    return 0;
}

int last_occurrence(vector<int> vec, int key)
{
    // DRY RUN (looping from end as we have to find last occurrence)
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        if (vec[i] == key)
            return i;
    }

    return -1;
}
