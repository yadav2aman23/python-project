#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string name;
    float cgpa;
    int rollno;
    int marks;
};
void input(student &s)
{
    cout << "Enter name, CGPA, rollno and marks: ";
    cin >> s.name >> s.cgpa >> s.rollno >> s.marks;
}

void print(student s)
{
    cout << "\nEnter the name \n"
         << s.name << "\nEnter the cgpa\n"
         << s.cgpa << "\nEnter the rollno\n"
         << s.rollno << "\nEntee the marks\n"
         << s.marks;
}

int main()
{
    student s1;
    input(s1);

    print(s1);

    return 0;
}