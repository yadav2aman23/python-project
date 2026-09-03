#include <iostream>
using namespace std;
class BankAccount
{
public:
    string name;
    int AccountNumber;
    double balance;

    BankAccount(string n, int acc, double bal)
    {
        name = n;
        AccountNumber = acc;
        balance = bal;
    }
};
void display()
{
    cout << "Name" << name << endl;
    cout << "Account NUmber" << AccountNumber << endl;
    cout << "Balance" << balance << endl;
}
int main()
{
    BankAccount account1("aman", 123456, 80000);
    account1.display();
    return 0;
}