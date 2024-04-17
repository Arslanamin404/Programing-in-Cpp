/*
!#####################################################################
*#                      Sum of all Sub Arrays                        #
*#                    Given an array of size N.                      #
?#       Output sum of each Sub Array of the given Array.            #
*#-------------------------------------------------------------------#
*#                      Input [1, 2, 2]                              #
*#                  Output 1, 3, 5, 2, 4, 2                          #
!#####################################################################
*/
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // n * (n + 1) / 2 {Find number of Sub Arrays}
    cout << "\nNumber of Possible Sub Arrays for an Array of size 5 = " << n * (n + 1) / 2 << endl << endl;
    
    for (int i = 0; i < n; i++)
    {
        int current = 0;
        for (int j = i; j < n; j++)
        {
            current += arr[j];
            cout << current << " ";
        }
    }

    return 0;
}