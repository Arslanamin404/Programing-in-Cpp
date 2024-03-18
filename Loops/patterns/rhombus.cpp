#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space > 0; space--)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}