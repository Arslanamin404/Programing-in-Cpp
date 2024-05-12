#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "ROWS: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int spaces = rows - i; spaces > 0; spaces--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}