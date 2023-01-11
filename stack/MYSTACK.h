#include <bits/stdc++.h>
using namespace std;

// creating template

// create  class

template <typename N>
class Node
{
public:
    N value;
    Node *next;
    Node *pre;

    Node(N value)
    {
        value = value;
        next = NULL;
        pre = NULL;
    }
};

template <typename S>
class Stack
{
    Node<S> *head;
    Node<S> *top;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // PUSH
    void push(S val)
    {
        // step 1:  create new Node
        Node<S> *newNode = new Node<S>(val);

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
    S pop()
    {
        Node<S> *delNode;
        delNode = top;
        S val = 1;
        // if has no element in stack
        if (head == NULL)
        {
            cout << "Stack UnderFlow" << endl;
            return val;
        }
        // there is only element
        if (top == head)
        {
            head = top = NULL;
        }
        // there has multiple element
        else
        {
            top = delNode->pre;
            top->next = NULL;
        }
        val = delNode->value;
        delete delNode;
        count--;
        // cout << "The poped value is: " << val << endl;
        return val;
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
    S Top()
    {
        S chk;
        if (top == NULL)
        {
            cout << "Stack UnderFlow. There is no element in top" << endl;
            // working as flag
            chk = -1;
        }
        else
        {
            chk = top->value;
        }
    }
};
