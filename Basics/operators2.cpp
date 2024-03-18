#include <iostream>
using namespace std;
int main()
{
    system("cls");
    cout << "Miscellaneous Operators\n--------------------" << endl;
    int a = 4;
    cout << "Int is of " << sizeof(a) << " bytes." << endl;
    cout << "Char is of " << sizeof(char) << " bytes." << endl;
    cout << "Float is of " << sizeof(float) << " bytes." << endl;
    cout << "Double is of " << sizeof(double) << " bytes." << endl;

    cout << "\nAddress of a is " << &a << endl;

    return 0;
}