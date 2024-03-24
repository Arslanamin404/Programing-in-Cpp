#include <iostream>
using namespace std;
void decimal_to_binary(int n);

int main()
{
    int num;
    cout << "Enter Decimal Number: ";
    cin >> num;
    decimal_to_binary(num);
    return 0;
}

void decimal_to_binary(int n)
{
    int original = n, ans = 0, power = 1;
    while (n > 0)
    {
        int remainder = n % 2;
        ans += remainder * power;
        power *= 10;
        n /= 2;
    }
    cout << "DECIMAL: " << original << endl
         << "BINARY: " << ans << endl;
}
