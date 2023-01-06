#include <bits/stdc++.h>
using namespace std;

// create  class

class Node
{
public:
    int value;
    Node *next;
    Node *pre;

    Node(int value)
    {
        value = value;
        next = NULL;
        pre = NULL;
    }
};

class Stack
{
    Node *head;
    Node *top;

public:
    // PUSH
    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = top = newNode;
            return;
        }
        top->next = newNode;
        top = newNode;
    }

    // POP
    // EMPTY
    // SIZE
    // TOP
};

int main()
{

    return 0;
}