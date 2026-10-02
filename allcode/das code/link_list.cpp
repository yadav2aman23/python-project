#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class list
{
    Node *head;
    Node *tails;

public:
    list()
    {
        head = tails = NULL;
    }
};

int main()
{
    return 0;
}