#include <iostream>
using namespace std;

class Animals
{
public:
    void eat()
    {
        cout << "The animls are eating" << endl;
    }
};

class Dog : public Animals
{
public:
    void brak()
    {
        cout << "the dog is breking " << endl;
    }
};

class cat : public Animals
{
public:
    void sleep()
    {
        cout << "the cat is sleepiing" << endl;
    }
};

int main()
{
    Dog d;
    cat c;

    d.eat();
    d.sleep();

    return 0;
}