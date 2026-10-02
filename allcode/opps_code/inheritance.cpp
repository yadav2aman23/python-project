#include <iostream>
using namespace std;

class Animals
{
public:
    void eat()
    {
        cout << "Animals is eatiing " << endl;
    }
};

class Dog : public Animals
{
public:
    void eat()
    {
        cout << "Animals is eating" << endl;
    }
};

class cat : public Animals
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

int main()
{
    Dog dog;
    cat cat;

    Cat.eat();

    return 0;
}