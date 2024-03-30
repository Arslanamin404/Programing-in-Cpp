#include <iostream>
#include <string>
using namespace std;

struct bank_account
{
    int balance = 0;
    string user_name;
    void create_account(string name, int opening_balance)
    {
        // cout << "Your Full Name: ";
        // getline(cin, name);
        // cout << "Account Opening Deposit: ";
        // cin >> balance;
        balance += opening_balance;
        user_name = name;
        cout << "----------------------------------------------------" << endl;
        cout << "\t Account Created Successfully " << endl;
        cout << "\t ----------------------------\n"
             << endl;
        cout << "Full Name: " << user_name << endl;
        cout << "Balance: $" << balance << "K" << endl;
        cout << "----------------------------------------------------\n\n"
             << endl;
    }

    void deposit(int amount)
    {
        balance += amount;
        cout << "$" << amount << "K deposited successfully to " << user_name << endl;
    }
    void withdraw(int amount)
    {
        if (balance > amount)
        {
            balance -= amount;
            cout << "$" << amount << "K withdrawn successfully from " << user_name << endl;
        }
        else
        {
            cout << "\n----------------------------------------" << endl;
            cout << "\tError! Insufficient Funds!" << endl;
            cout << "----------------------------------------" << endl;
        }
    }
    void get_balance()
    {
        cout << "---------------------------------" << endl;
        cout << "\tFull Name: " << user_name << endl;
        cout << "\tBalance: $" << balance << "K" << endl;
        cout << "---------------------------------\n"
             << endl;
    }

    void transfer(int amount, bank_account *account)
    {
        if (balance > amount)
        {
            withdraw(amount);
            account->deposit(amount);
            cout << "$" << amount << "K Transferred Successfully from " << user_name << " to " << account->user_name << endl;
        }
        else
        {
            cout << "\n----------------------------------------" << endl;
            cout << "\tError! Insufficient Funds!" << endl;
            cout << "----------------------------------------" << endl;
        }
    }
};

int main()
{
    struct bank_account RCB, KKR;
    RCB.create_account("RCB", 500);
    KKR.create_account("KKR", 450);
    RCB.deposit(100);
    RCB.get_balance();
    KKR.withdraw(200);
    KKR.get_balance();
    RCB.transfer(100, &KKR);
    KKR.get_balance();
    return 0;
}