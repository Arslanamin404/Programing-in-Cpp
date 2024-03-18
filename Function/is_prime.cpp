#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int n);
int main()
{
    int start, end;
    cout << "Start Number: ";
    cin >> start;
    cout << "End Number: ";
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        if (is_prime(i))
            cout << i << ",";
    }

    return 0;
}

bool is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
