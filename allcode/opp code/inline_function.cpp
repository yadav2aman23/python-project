#include <iostream>
using namespace std;

int product(int a, int b)
{
    static int c = 0;
    c = c + 1;
    return a * b + c;
}
/*inline int product(int a, int b)
{
    return a * b;
}*/
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