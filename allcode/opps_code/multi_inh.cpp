#include <iostream>
using namespace std;

class Father
{
public:
    void work()
    {
        cout << "Father is working" << endl;
    }
};

class Mother
{
public:
    void cook()
    {
        cout << "Mother is cooking " << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void play()
    {
        cout << "Chils is play" << endl;
    }
};

int main()
{
    Child c;

    c.work();
    c.play();
    c.work();

    return 0;
};