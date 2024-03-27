#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cout << "Element [" << i + 1 << "]: ";
        cin >> element;
        v.push_back(element);
    }

    cout << "\n----------------------------------\n";
    //* for loop
    cout << "For loop" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    v.insert(v.begin() + 2, 50);

    cout << "\n----------------------------------\n";
    //* for each loop
    cout << "For each loop" << endl;
    for (int ele : v)
        cout << ele << " ";

    cout << "\n----------------------------------\n";
    cout << "Start: " << v.front() << endl;
    cout << "End: " << v.back() << endl;
    cout << "----------------------------------\n";

    (v.empty()) ? cout << "Vector is empty" : cout << "Vector is not empty";
    cout << "\n----------------------------------\n";

    return 0;
}