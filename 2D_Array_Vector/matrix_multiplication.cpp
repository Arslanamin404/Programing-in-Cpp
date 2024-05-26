/*
Write a program to display multiplication of two matrices
entered by the user.
*/
#include <iostream>
using namespace std;

#define MAX_ROWS 40
#define MAX_COLS 40

void input_Matrix(int (&arr)[MAX_ROWS][MAX_COLS], int &rows, int &cols);
void print_Matrix(int (&arr)[MAX_ROWS][MAX_COLS], int &rows, int &cols);

int main()
{
    int row_A, col_A, row_B, col_B;

    cout << "Rows & Cols of Matrix A: ";
    cin >> row_A >> col_A;
    int Matrix_A[MAX_ROWS][MAX_COLS];

    cout << "Rows & Cols of Matrix B: ";
    cin >> row_B >> col_B;
    int Matrix_B[MAX_ROWS][MAX_COLS];

    if (col_A != row_B)
    {
        cout << "Matrix Multiplication not possible!" << endl;
        cout << "ERROR: Columns of Matrix_A != Rows of Matrix_B" << endl;
        return 0;
    }

    cout << "Enter " << row_A * col_A << " elements for matrix_A: " << endl;
    input_Matrix(Matrix_A, row_A, col_A);

    cout << "Enter " << row_B * col_B << " elements for matrix_B: " << endl;
    input_Matrix(Matrix_B, row_B, col_B);

    cout << "Matrix A: " << endl;
    cout << "-----------------" << endl;
    print_Matrix(Matrix_A, row_A, col_A);

    cout << "Matrix B: " << endl;
    cout << "-----------------" << endl;
    print_Matrix(Matrix_B, row_B, col_B);

    int result[MAX_ROWS][MAX_COLS];

    cout << "Matrix Multiplication (A x B): " << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < row_A; i++)
    {
        for (int j = 0; j < col_B; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col_A; k++)
            {
                result[i][j] += (Matrix_A[i][k] * Matrix_B[k][j]);
            }
        }
    }

    print_Matrix(result, row_A, col_B);
    return 0;
}

void input_Matrix(int (&arr)[MAX_ROWS][MAX_COLS], int &rows, int &cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl
         << endl;
}

void print_Matrix(int (&arr)[MAX_ROWS][MAX_COLS], int &rows, int &cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}
