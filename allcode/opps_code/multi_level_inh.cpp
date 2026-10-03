#include <iostream>

using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animals is eating" << endl;
    }
};

class mammal : public Animal
{
public:
    void walk()
    {
        cout << "Mammal is walking " << endl;
    }
};

class Dog : public mammal
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
    d.walk();
    d.bark();
    return 0;
}
