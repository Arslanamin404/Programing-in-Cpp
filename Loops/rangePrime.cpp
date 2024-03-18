#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    system("cls");
    int start, end;
    cout << "Start Number: ";
    cin >> start;
    cout << "End Number: ";
    cin >> end;

    cout << "Prime Numbers from " << start << " to " << end << " are: " << endl;

    for (int i = start; i <= end; i++)
    {
        int flag = 0; // Reset flag for each number
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << i << ", ";
        }
    }

    return 0;
}