#include <iostream>

using namespace std;

class animals
{
public:
    void eat()
    {
        cout << "she is eating" << endl;
    }
};

class Dog() : public animals
{
public:
    void brak()
    {
        cout << "A dog is barking" << endl;
    }
};

class Cat()
{
public:
    void sleep()
    {
        cout << "She is sleeping " << endl;
    }
};

inr main()
{
    dog d;
    cat c;

    d.eat();

    return 0;
}