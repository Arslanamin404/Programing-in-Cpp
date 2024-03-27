// Find the difference between sum of elements at even indexes to the sum of elements at odd
#include <iostream>
#include <vector>
using namespace std;
int get_difference(vector<int> vec);

int main()
{
    vector<int> vec1(6);
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << "Element " << i << ": ";
        cin >> vec1[i];
    }
    cout << get_difference(vec1);
    return 0;
}

int get_difference(vector<int> vec)
{
    // *APPROACH 1 (DRY RUN)
    /*
    int ODD_SUM = 0, EVEN_SUM = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (i % 2 == 0)
            EVEN_SUM += vec[i];
        else
            ODD_SUM += vec[i];
    }
    return EVEN_SUM - ODD_SUM;
    */

    // *APPROACH 2 (DRY RUN)
    int SUM = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (i % 2 == 0)
            SUM += vec[i];
        else
            SUM -= vec[i];
    }
    return SUM;
}
