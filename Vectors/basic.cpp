#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl
         << endl;

    v.push_back(10);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl
         << endl;

    v.push_back(20);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl
         << endl;

    v.push_back(30);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl
         << endl;

    v.push_back(40);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl
         << endl;

    v.push_back(60);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl
         << endl;

    v.resize(10);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl
         << endl;

    v.pop_back();
    v.pop_back();
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl
         << endl;
    return 0;
}