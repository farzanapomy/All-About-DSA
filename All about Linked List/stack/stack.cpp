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
        // step 1:  create new Node
        Node *newNode = new Node(val);

        // step 2.1: if list is empty then newNode set as a head and top
        if (head == NULL)
        {
            head = top = newNode;
            return;
        }

        // step 2.2: here has must a value so we just add newNode as only top 
        top->next = newNode;
        newNode->pre = top;
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