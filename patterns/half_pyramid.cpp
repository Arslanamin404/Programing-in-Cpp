/*
Output:
        *
      * *
    * * *
  * * * *
* * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = n - i; spaces > 0; spaces--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}