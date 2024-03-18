#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
    int input, flag;
    cout << "Enter Number: ";
    cin >> input;
    for (int i = 2; i <= sqrt(input); i++)
    {
        if (input % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << input << " is a COMPOSITE NUMBER." << endl;
    }
    else
    {
        cout << input << " is a PRIME NUMBER." << endl;
    }
    cout << "\nPress any key to continue. . .";
    getch();
    return 0;
}