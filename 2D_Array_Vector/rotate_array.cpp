/*
*GIVEN A SQUARE MATRIX (N x N), ROTATE IT BY 90DEG IN A CLOCKWISE DIRECTION WITHOUT USING EXTRA SPACE
?INPUT:
1 2 3
4 5 6
7 8 9
!OUTPUT
7 4 1
8 5 2
9 6 3
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate_array(vector<vector<int>> &v, int n);

int main()
{
    int n;
    cout << "ROWS FOR SQUARE MATRIX: ";
    cin >> n;

    vector<vector<int>> vec(n, vector<int>(n));

    // taking input
    cout << "ENTER ELEMENTS: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }

    cout << "\nORIGINAL MATRIX: " << endl;
    for (auto &row : vec)
    {
        for (auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    rotate_array(vec, n);

    cout << "\nPRINTING VECTOR AFTER ROTATING 90deg: " << endl;
    for (auto &row : vec)
    {
        for (auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}

void rotate_array(vector<vector<int>> &v, int n)
{
    // TRANSPOSE SQUARE MATRIX
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    // reverse every row

    for (int i = 0; i < n; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
}
