#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    float marks;

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
        cout << "Rollno" << rollno << endl;
        cout << "Name" << name << endl;
        cout << "marks" << marks << endl;
    }
};

int main()
{
    student s;
    cout << "Enter the Roll no and name with marks =  ";

    s.input();
    cout << "Before the increment  ";
    s.output();

    ++s;
    cout << "After the incemnt  ";
    s.output();
    --s;
    cout << "After the decremnt  ";
    s.output();
    return 0;
}