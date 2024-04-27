/*
* Lets assume You have n rupees
! 1 Chocolate = 1 Rs
! 3 Warpers = 1 Chocolate
? How many chocolates you will get for n rupees
*/
#include <iostream>
using namespace std;

int count_chocolates(int rupees);
int main()
{
    int n;
    cout << "How many rupees you have: ";
    cin >> n;
    cout << "You will get " << count_chocolates(n) << " chocolates for " << n << " rupees." << endl;
    return 0;
}

int count_chocolates(int rupees)
{
    int chocolates = rupees;   // 1Rs = 1 chocolate
    int wrappers = chocolates; // no. of chocolates = no. of warpers
    while (wrappers >= 3)
    {
        int new_chocolates = wrappers / 3; // chocolates obtained from warpers
        chocolates += new_chocolates;
        wrappers = wrappers % 3 + new_chocolates; // updating remaining warpers
    }
    return chocolates;
}
