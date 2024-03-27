#include <iostream>
using namespace std;
/*
*SYNTAX:
for(datatype &var_name : arr/vector_name)
{
    cout<<var_name;
}
*/
int main()
{
    int arr[5];
    for (int &element : arr)
    {
        cout << "Element: ";
        cin >> element;
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}