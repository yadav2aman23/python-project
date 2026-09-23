#include <iostream>
using namespace std;
class student
{
    char name[20];
    float marks;
    int rollno;
    void input()
    {
        cin >> name >> marks >> rollno;
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
        cout << "Name" << name << "Roll no" << rollno << "Marks" << marks << endl;
    }
};

int main()
{
    student s;
    s.input();
    cout << "before the incremnt";
    s.output();
    ++s;
    cout << "after  the incremnt";

    s.output();
    cout << "After the decermnt";
    --s;

    return 0;
}