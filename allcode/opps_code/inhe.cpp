// single Inheritance

#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animals are eating " << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking " << endl;
    }
};

int main()
{
    Dog d;

    d.eat();
    d.bark();
}