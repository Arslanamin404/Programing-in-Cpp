/*
 |----------------------|
*|   OUTPUT for n=4     |
 |----------------------|

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
!|-----------------------------------------------------------------------|
?|                       KEY_POINTS                                      |
?|       * Its simple pattern of 4 triangles with spaces                 |
?|       * Spaces = 2*n - 2*i;                                           |
?|       * Solve upper and lower half of pattern separately              |
!|-----------------------------------------------------------------------|

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Rows: ";
    cin >> n;

    // Upper Half Of ButterFly
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }

        for (int spaces = 2 * n - 2 * i; spaces > 0; spaces--)
        {
            cout << "   ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    // Lower Half Of ButterFly
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }

        for (int spaces = 2 * n - 2 * i; spaces > 0; spaces--)
        {
            cout << "   ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}