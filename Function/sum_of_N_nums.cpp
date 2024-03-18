#include <iostream>
using namespace std;

int sum(int n);
int main()
{
    int n;
    cout << "Value of N: ";
    cin >> n;
    cout << "Sum of first " << n << " natural nums is " << sum(n) << endl;
    return 0;
}
int sum(int n)
{
    int sum = (n * (n + 1)) / 2;
    return sum;
}