/*
|-----------------------------|
|   Binary Number Triangle    |
|           n=5               |
|-----------------------------|

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

!|------------------------------------|
!|            OBSERVATION             |
!|------------------------------------|
?| if (row num+col num)==even:print 1 |
?| else print 0                       |
!|------------------------------------|

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // ternary operator (expresion)? if true: else;
            ((i + j) % 2 == 0) ? cout << "1 " : cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}