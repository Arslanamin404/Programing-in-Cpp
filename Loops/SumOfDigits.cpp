// WAP to find sum of digits of a number entered by the user using a do-while loop.
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, last_digit;
    cout << "Enter num: ";
    cin >> num;
    while (num > 0)
    {
        last_digit = num % 10;
        sum += last_digit;
        num /= 10;
    }

    cout << "Sum of digits is " << sum << endl;
    return 0;
}