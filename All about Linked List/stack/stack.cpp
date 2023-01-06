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
    int count = 0;

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
            count++;
            return;
        }

        // step 2.2: here has must a value so we just add newNode as only top
        top->next = newNode;
        newNode->pre = top;
        top = newNode;
        count++;
    }

    // POP
    void pop()
    {
        Node *delNode;
        delNode = top;
        int ck = -1;
        // if has no element in stack
        if (head == NULL)
        {
            cout << "Stack UnderFlow" << endl;
            return ck;
        }
        // there is only element
        if (head = top)
        {
            head = top = NULL;
        }
        // there has multiple element
        else
        {
            top = delNode->pre;
            top->next = NULL;
        }
        ck = delNode->value;
        delete delNode;
        count--;
        return ck;
    }
    // EMPTY

    bool empty()
    {
        if (head == NULL)
        {
            true;
        }
        else
            return false;
    }
    // SIZE
    int size()
    {
        return count;
    }
    // TOP
    int top()
    {
        if (top == NULL)
        {
            cout << "Stack UnderFlow. There is no element in top" << endl;
        }
        return top->value;
    }
};

int main()
{

    return 0;
}