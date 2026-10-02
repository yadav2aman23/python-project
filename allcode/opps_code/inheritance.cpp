#include <iostream>
using namespace std;
class animals()
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};

class dog : public animals
{
public:
    void bark()
    {
        cout << "the dogs was braking" << endl;
    }
};

class cat : public animals
{
public:
    void sleep()
    {
        cout << "she was slepping" << endl;
    }
};

int main()
{
    dog D;
    cat c;

    c.eat();
}