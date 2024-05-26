#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate_pascal_triangle(int num_rows);
int main()
{
    int num_rows;
    cout << "Rows: ";
    cin >> num_rows;

    vector<vector<int>> ans;

    ans = generate_pascal_triangle(num_rows);

    cout << "\n---------------------------------" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "ROW " << i << ":\t";

        for (int j = 0; j <= i; j++)
        {
            cout << ans[i][j] << "  ";
        }
        cout << endl;
        cout << "---------------------------------" << endl;
    }

    return 0;
}

vector<vector<int>> generate_pascal_triangle(int num_rows)
{
    vector<vector<int>> result;
    result.push_back({1}); // first row

    for (int i = 1; i < num_rows; i++)
    {
        vector<int> row;
        row.push_back(1); // first column
        for (int j = 1; j <= i - 1; j++)
        {
            row.push_back(result[i - 1][j - 1] + result[i - 1][j]);
        }

        row.push_back(1); // last column
        result.push_back(row);
    }
    return result;
}
