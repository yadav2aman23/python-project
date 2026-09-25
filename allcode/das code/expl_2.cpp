#include <iostream>
using namespace std;
int main()
{
    int a[20], size, pos, i;
    cout << "Enter the size of array:" << "\n";
    cin >> size;

    cout << "Enter the Array element:" << "\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the positions";
    cin >> pos;
    for (i = pos; i < size; i++)
    {
        a[i] = a[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\n";
    }
    return 0;
}