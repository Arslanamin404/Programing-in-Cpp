/*
n = 4
      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "ROWS: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space > 0; space--)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        for (int k = 2; k <= i; k++)
        {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}