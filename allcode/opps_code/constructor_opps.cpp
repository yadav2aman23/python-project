#include <iostream>
using namespace std;
class BankAccount
{
public:
    string name;
    int AccountNumber;
    double balance;

    // constructor

    BankAccount(string n, int acc, double bal)
    {
        name = n;
        AccountNumber = acc;
        balance = bal;
    }
    void display()
    {
        cout << "name" << name << endl;
        cout << "Account number " << AccountNumber << endl;
        cout << "balance" << balance << endl;
    }
};

int main()
{
    BankAccount account1("Aman", 1123454, 8000);
    account1.display();
    return 0;
}
