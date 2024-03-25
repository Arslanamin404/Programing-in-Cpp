#include <iostream>
using namespace std;
void pass_by_value(int x);
void change_value(int &z);
int main()
{
    int a = 20;
    // reference variable
    int &q = a;
    cout << "a: " << a << endl;
    cout << "q: " << q << endl;
    // both having same address
    cout << "address of a: " << &a << endl;
    cout << "address of q: " << &q << endl
         << endl;

    pass_by_value(a);
    cout << "(pass by value) a: " << a << endl;
    // cout << "(pass by value) q: " << q << endl<<endl;

    //* pass_by_reference
    change_value(a);
    cout << "(pass by reference) a: " << a << endl;
    // cout << "(pass by reference) q: " << q << endl;
    return 0;
}
void pass_by_value(int x)
{
    x = 100;
}

void change_value(int &z)
{
    z = 80;
}
