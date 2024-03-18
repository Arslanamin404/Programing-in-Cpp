// WAP that takes a year as input and determines whether it is a leap year or not.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter Year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a Leap Year";
            }
            else
            {
                cout << year << " is not a Leap Year";
            }
        }
        else
        {
            cout << year << " is a Leap Year";
        }
    }
    else
    {
        cout << year << " is not a Leap Year";
    }
    return 0;
}