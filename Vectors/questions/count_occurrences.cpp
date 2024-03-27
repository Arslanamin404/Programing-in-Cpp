// WAP to count the occurrence of an element x
#include <iostream>
#include <vector>
using namespace std;
int count_occurrences(vector<int> vec, int key);

int main()
{
    vector<int> vec1(5);
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << "Element " << i << ": ";
        cin >> vec1[i];
    }
    cout << "-------------------------------------" << endl;
    int x;
    cout << "X: ";
    cin >> x;
    cout << "Number of occurrences of " << x << " are: " << count_occurrences(vec1, x) << endl;
    cout << "-------------------------------------" << endl;

    return 0;
}

int count_occurrences(vector<int> vec, int key)
{
    int count = 0;
    // foreach loop
    for (int element : vec)
        if (element == key)
            count++;

    return count;
}
