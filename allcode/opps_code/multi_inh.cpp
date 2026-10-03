#include <iostream>
using namespace std;

class Fahter
{
public:
    void work()
    {
        cout << "Father is working " << endl;
    }
};

class Mother
{
public:
    void cook()
    {
        cout << "mother is cooking " << endl;
    }
};

class Child : public Fahter, public Mother
{
public:
    void play()
    {
        cout << "The child playing " << endl;
    }
};

int main()
{
    Child c;

    c.work();
    c.play();
    c.cook();

    return 0;
};
