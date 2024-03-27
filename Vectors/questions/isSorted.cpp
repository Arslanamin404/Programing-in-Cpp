// WAP to count the occurrence of an element x
#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int> vec);

int main()
{
    vector<int> vec1(5);
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << "Element " << i << ": ";
        cin >> vec1[i];
    }

    (isSorted(vec1)) ? cout << "SORTED" : cout << "UNSORTED";

    return 0;
}

bool isSorted(vector<int> vec)
{
    //* DRY RUN
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] >= vec[i + 1])
            return false;
    }
    return true;
}
