#include <bits/stdc++.h>
using namespace std;

// to store value and node

class DublyNode
{
public:
    int value;
    DublyNode *next;
};

void display(DublyNode* n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->next != NULL)
        {
            cout << " " << endl;
        }

        n = n->next;
    }
}

int main()
{
    DublyNode *head = new DublyNode();
    DublyNode *second = new DublyNode();
    DublyNode *third = new DublyNode();
    DublyNode *fourth = new DublyNode();

    head->value = 1;
    second->value = 5;
    third->value = 8;
    fourth->value = 9;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;
    display(head);
}