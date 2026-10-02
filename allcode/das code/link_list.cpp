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
    void push_front(int val)
    {
        Node *newNode = new Node(val);
    }
};

int main()
{
    return 0;
}