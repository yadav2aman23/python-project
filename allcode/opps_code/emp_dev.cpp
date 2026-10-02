#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID; // privet
protected:
    string name;
    double salary;

public:
    Employee(int id, string n, double s)
    {
        employeeID = id;
        name = n;
        salary = s;
    }

    void displayEmployee()
    {
        cout << "Empoyee ID " << employeeID << endl;
        cout << "Name" << name << endl;
        cout << "Salary " << salary << endl;
    }
};

class Developer : public Employee
{
    string programingLangugae;

public:
    Developer(int id, string n, double s, string lang)
        : Employee(id, n, s)
    {
        programingLangugae = lang
    }

    void displayDeveloper()
    {
        cout << "name" << name << endl;
        cout << "Salary:" << salary << endl;
        cout << "ProgramingLanguage: " << programingLangugae << endl;
    }
};

int main()
{
    Developer d(101, "aman", 50000, "c++");

    cout << "---------Employee Information-------" << endl;

    d.displayDeveloper();

    cout << endl;
    cout << "Employee Id " << d.getID() << endl;

    return 0;
}
