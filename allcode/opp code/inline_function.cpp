#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "Enter the numer a ";
    cin >> a;
    cout << "Enter the number b ";
    cin >> b;

    cout << product(a, b) << endl;

    return 0;
}