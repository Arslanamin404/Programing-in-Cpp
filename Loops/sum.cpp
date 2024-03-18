// print sum of n natural nums
#include <iostream>
using namespace std;
int main()
{
    int input, i = 1, sum = 0;
    cout << "Enter number: ";
    cin >> input;

    while (i <= input)
    {
        sum += i;
        i++;
    }
    cout << "Sum of " << input << " natural numbers is: " << sum << endl;

    cout << "Sum of " << input << " natural numbers is: " << sum << endl;
    return 0;
}