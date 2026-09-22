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
int main()
{
    student s1;
    cout << "\nEnter the name \n"
         << s1.name << "\nEnter the cgpa\n"
         << s1.cgpa << "\nEnter the rollno\n"
         << s1.rollno << "\nEntee the marks\n"
         << s1.marks;

    cin >> s1.name >> s1.cgpa >> s1.rollno >> s1.marks;

    return 0;
}