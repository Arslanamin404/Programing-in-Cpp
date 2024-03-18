#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a = 20, b = 10;

    cout << "\nArithmetic Operators\n-------------------" << endl;
    cout << "Sum: " << a + b << endl;
    cout << "Diff: " << a - b << endl;
    cout << "Prod: " << a * b << endl;
    cout << "Divide: " << a / b << endl;
    cout << "Modulo: " << a % b << endl;

    cout << "\nRelational Operators\n-------------------" << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    return 0;
}