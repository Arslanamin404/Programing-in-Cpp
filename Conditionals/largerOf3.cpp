// WAP that prompts the user to enter 3 nums and then prints the largest num.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << a << " is largest";
    }
    else if (b > c && b > a)
    {
        cout << b << " is largest";
    }
    else
    {
        cout << c << " is largest";
    }

    //! using If Else ladder
    /*
    //* a=15
    //* b=18
    //* c=20

    if (a > b)
        {
            if (a > c)
            {
                cout << a << " is larger";
            }
            else
            {
                cout << c << " is larger";
            }
        }
        else
        {
            if (b > c)
            {
                cout << b << " is larger";
            }
            else
            {
                cout << c << " is larger";
            }
        }
    */
    return 0;
}