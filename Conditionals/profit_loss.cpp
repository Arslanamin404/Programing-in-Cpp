// WAP that takes input for CostPrice(cp) and SellingPrice(sp). Calc Profit or Loss
#include <iostream>
using namespace std;

int main()
{
    int CostPrice, SellingPrice;
    cout << "Enter Cost Price: ";
    cin >> CostPrice;
    cout << "Enter Selling Price: ";
    cin >> SellingPrice;
    (CostPrice > SellingPrice) ? cout << "Your Loss is: " << CostPrice - SellingPrice : cout << "Your Profit is: " << SellingPrice - CostPrice;
    return 0;
}