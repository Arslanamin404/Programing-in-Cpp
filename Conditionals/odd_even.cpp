// WAP that takes an input from the user and prints if its even or odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is Even" << endl;
    }
    else
    {
        cout << num << " is Odd" << endl;
    }
    return 0;
}