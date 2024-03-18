// WAP that asks user to input age. If age >= 18, print "You are an adult", otherwise print "You are a minor"
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    //! Ternary Operator
    (age >= 18) ? cout << "You are an adult" << endl : cout << "You are an Minor" << endl;
    return 0;
}