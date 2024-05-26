/*
!Syntax 2D vector:
vector<vector<datatype>> Vector_name(rows, vector<datatype>(cols, initial_value(optional)));
*/

#include <iostream>
#include <vector>

using namespace std;

void input_vector(vector<vector<int>> &vec, int &rows, int &cols);
void print_vector(vector<vector<int>> &vec, int &rows, int &cols);

int main()
{
    //  vector<vector<int>> V(3, vector<int>(4, 0));
    int m, n;
    cout << "Rows & Cols: ";
    cin >> m >> n;

    vector<vector<int>> vec(m, vector<int>(n));

    input_vector(vec, m, n);
    print_vector(vec, m, n);
    return 0;
}

void input_vector(vector<vector<int>> &vec, int &rows, int &cols)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "ROW " << i + 1 << ": " << endl;
        for (int j = 0; j < cols; j++)
        {
            cin >> vec[i][j];
        }
    }
}

void print_vector(vector<vector<int>> &vec, int &rows, int &cols)
{
    cout << "Matrix: " << rows << " X " << cols << endl
         << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
