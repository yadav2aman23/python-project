// single inheritant

#include <iostream>
using namespace std;
class Animals
{
public:
    void eat()
    {
        cout << "Animals are eating" << endl;
    }
};

class Dog : public Animals
{
public:
    void break()
    {
        cout << "the dogs are breaking" << endl;
    }
};

class cat : public Animals
{
public:
    void sleep()
    {
        cout << "The cat is sleep" << endl;
    }
};

int main()
{
    Dog d;
    cat c;

    d.eat();
    c.eat();
    d.break();
    c.break();

    return 0;
}