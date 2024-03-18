#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char opp;
    cout << "Enter num1: ";
    cin >> n1;
    cout << "Enter num2: ";
    cin >> n2;

    cout << "Enter operator (+,-,/,*,%): ";
    cin >> opp;

    switch (opp)
    {
    case '+':
        cout << "SUM is " << n1 + n2 << endl;
        break;
    case '-':
        cout << "Difference is " << n1 - n2 << endl;
        break;
    case '*':
        cout << "Product is " << n1 * n2 << endl;
        break;
    case '/':
        cout << "Division is " << n1 / n2 << endl;
        break;
    case '%':
        cout << "Remainder is " << n1 % n2 << endl;
        break;

    default:
        cout << "Invalid Input for operator";
        break;
    }
    return 0;
}