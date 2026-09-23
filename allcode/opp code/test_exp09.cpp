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

        cout << "Name:" << name << endl;
        cout << "Rollno: " << rollno << endl;
        cout << "Marks" << marks << endl;
    }
};

int main()
{
    student s;
    cout << "Enter the you name ,rollno and marks";

    s.input();
    cout << "before the incremnt";

    s.output();
    ++s;
    cout << "after  the incremnt";

    s.output();
    --s;
    cout << "After the decermnt";
    s.output();

    return 0;
}