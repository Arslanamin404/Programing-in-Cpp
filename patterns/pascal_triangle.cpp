#include <iostream>
#include <vector>
using namespace std;

int factorial(int n);
void pascal_triangle(int &rows);

int main()
{
    int m = 5;
    pascal_triangle(m);
    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

void pascal_triangle(int &rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << factorial(i) / (factorial(j) * factorial((i - j))) << " ";
        }
        cout << endl;
    }
}
