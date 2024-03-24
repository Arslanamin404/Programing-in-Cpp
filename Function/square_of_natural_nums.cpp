#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}

int main()
{
    int num;
    cout << "Enter Decimal Number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << i << "^2 = " << square(i) << endl;
    }

    return 0;
}
