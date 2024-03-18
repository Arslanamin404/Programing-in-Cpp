#include <iostream>
#include <iomanip>
using namespace std;

void unformatted_table();
void formatted_table();

int main()
{
    system("cls");
    unformatted_table();
    formatted_table();
    return 0;
}

void unformatted_table()
{
    cout << "|-------------------------------|" << endl;
    cout << "|\tUnformatted Data \t|" << endl;
    cout << "|-------------------------------|" << endl;
    cout << "John Doe 30" << endl;
    cout << "Jane Smith 25" << endl;
    cout << "Michael Johnson 35" << endl;
    cout << "Emily Williams 28" << endl;
    cout << "David Brown 40" << endl;
    cout << "Sarah Jones 32" << endl;
    cout << "Daniel Taylor 27" << endl;
    cout << "Jessica Martinez 33" << endl;
    cout << "Christopher Anderson 29" << endl;
    cout << "Amanda Thomas 31" << endl;
}

void formatted_table()
{
    // its better to use variable for widths
    // col_width = 20;
    // setw(col_width);
    cout << right;
    cout << "\n|-----------------------------------------------|" << endl;
    cout << "|\t\tFormatted Table \t\t|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "|S.No." << setw(15) << "First Name" << setw(13) << "Last Name" << setw(10) << "Age" << setw(5) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 1" << setw(15) << "John" << setw(15) << "Doe " << setw(12) << "30" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 2" << setw(15) << "Jane" << setw(15) << "Smith" << setw(12) << "25" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 3" << setw(15) << "Michael" << setw(15) << "Johnson" << setw(12) << "35" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 4" << setw(15) << "Emily" << setw(15) << "Williams" << setw(12) << "28" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 5" << setw(15) << "David" << setw(15) << "Brown" << setw(12) << "40" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 6" << setw(15) << "Sarah" << setw(15) << "Jones" << setw(12) << "32" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 7" << setw(15) << "Daniel" << setw(15) << "Taylor" << setw(12) << "27" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 8" << setw(15) << "Jessica" << setw(15) << "Martinez" << setw(12) << "33" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
    cout << "| 9" << setw(15) << "Amanda" << setw(15) << "Thomas" << setw(12) << "31" << setw(4) << "|" << endl;
    cout << "|-----------------------------------------------|" << endl;
}
