#include <iostream>
using namespace std;
void Binary_to_Decimal(int n);

int main()
{
    int num;
    cout << "Enter Binary Number: ";
    cin >> num;
    Binary_to_Decimal(num);
    return 0;
}

void Binary_to_Decimal(int n)
{
    int original = n, ans = 0, power = 1; //(2^0=1)
    while (n > 0)
    {
        int last_digit = n % 10;
        ans += last_digit * power;
        power *= 2;
        n /= 10;
    }
    cout << "BINARY: " << original << endl
         << "DECIMAL: " << ans << endl;
}
