/*
Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.
Input row = 3, col = 4

matrix[] = {{0,1,1,1},
            {0,0,0,1},
            {0,0,0, 1}}
Output: 0
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int left_most_ones_row(vector<vector<int>> &matrix);

int main()
{
    int rows, cols;
    cout << "ROWS & COLS: ";
    cin >> rows >> cols;

    // vector<vector<int>> vec{{0, 1, 1, 1},
    //                         {0, 0, 0, 1},
    //                         {0, 0, 0, 1},
    //                         {1, 1, 1, 1}};

    vector<vector<int>> vec(rows, vector<int>(cols));
    cout << "Enter only 0's and 1's" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> vec[i][j];
        }
    }

    // cout << "Size: " << vec.size() << endl;

    int result = left_most_ones_row(vec);
    cout << "\nIndex of row with the maximum number of 1s is: " << result << endl;
    return 0;
}

int left_most_ones_row(vector<vector<int>> &matrix)
{
    int leftMostOne = -1;
    int max_ones_row = -1;
    int j = matrix[0].size() - 1; // columns

    // FINDING LEFTMOST ONE IN 0TH ROW
    while (j >= 0 && matrix[0][j] == 1)
    {
        leftMostOne = j;
        max_ones_row = 0;
        j--;
    }

    // CHECK FOR THE REST OF ROWS IF WE CAN FIND A 1 LEFT TO THE leftMostOne
    for (int i = 1; i < matrix.size(); i++)
    {
        while (j >= 0 && matrix[i][j] == 1)
        {
            leftMostOne = j;
            max_ones_row = i;
            j--;
        }
    }

    return max_ones_row;
}
