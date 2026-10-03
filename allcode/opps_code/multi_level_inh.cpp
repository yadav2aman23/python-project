#include <iostream>

using namespace std;

class Animals
{
public:
    void eat()
    {
        cout << "Animals is eating" << endl;
    }
};

class raj : public Animals
{
public:
    void walk()
    {
        cout << "Raj is walking" << endl;
    }
};

class dog : public raj
{
public:
    void brak()
    {
        cout << "The dog was braking" << endl;
    }
};

int main()
{
    dog d;

    d.brak();
    d.eat();
    d.walk();

    return 0;
}