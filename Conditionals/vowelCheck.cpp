/* WAP that asks to input a Char. If the char is a vowel (a, e, i, o, u),
print "It's a vowel", otherwise print "It's a consonant"*/
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter any character: ";
    cin >> c;
    switch (c)
    {
    case 'a':
        cout << "It's a vowel";
        break;
    case 'e':
        cout << "It's a vowel";
        break;
    case 'i':
        cout << "It's a vowel";
        break;
    case 'o':
        cout << "It's a vowel";
        break;
    case 'u':
        cout << "It's a vowel";
        break;
    default:
        cout << "It's a consonant";
        break;
    }
    return 0;
}