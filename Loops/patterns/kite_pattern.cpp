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
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int space = n - i; space > 0; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}