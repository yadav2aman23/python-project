#include <iostream>
// #include <conio.h>
using namespace std;

class student
{
    int rollno;
    char name[20];
    int marks;

public:
    void input()
    {
        cin >> rollno >> name >> marks;
    }
    void operator++()
    {
        marks++;
    }
    void operator--()
    {
        marks--;
    }
    void output()
    {
        cout << "Rollno: " << rollno << endl;
        cout << "Name:" << name << endl;
        cout << "Marks" << marks << endl;
    }
};
int main()
{
    student s;
    cout << "Enter the Roll no  and you name with marks";
    s.input();
    cout << "\nbefore the increment:\n";

    s.output();
    ++s;

    cout << "\nAfter the Increment\n";
    s.output();
    --s;
    cout << "\nAfter the Decrement:\n";
    s.output();
    // getch();
    return 0;
}