#include <iostream>
using namespace std;

void print_fibonacci_series(int terms);
int main()
{
    int number_of_terms;
    cout << "Number of Terms: ";
    cin >> number_of_terms;
    print_fibonacci_series(number_of_terms);
    return 0;
}

void print_fibonacci_series(int terms)
{
    int current_term = 1, previous_term = 0;
    cout << "The " << terms << " terms of Fibonacci Series are: " << endl;
    for (int i = 0; i < terms; i++)
    {
        cout << previous_term << ",";
        int next_term = current_term + previous_term;
        previous_term = current_term;
        current_term = next_term;
    }
}
