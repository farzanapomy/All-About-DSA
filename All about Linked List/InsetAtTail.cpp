#include <bits/stdc++.h>
using namespace std;

// to store value and node

class DublyNode
{
public:
    int value;
    DublyNode *next;

    // creating a constructor
    DublyNode(int val)
    {
        value = val;
        next = NULL;
    }
};

void insetAtTail(DublyNode *&head, int value)
{
    DublyNode *newNode = new DublyNode(value);

    // if head null then this will be work
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // if head!= NULL then this will be work.
    DublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(DublyNode *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->next != NULL)
        {
            cout << " -> ";
        }

        n = n->next;
    }
}

int main()
{
    DublyNode *head = NULL;
    int n;
    char choice = 'Y';

    while (choice == 'Y')
    {
        cout << "Enter the value:";
        cin >> n;
        insetAtTail(head, n);
        cout << "Do you want to continue: (Y/N)";
        cin >> choice;
    }

    // Node *second = new Node();
    // Node *third = new Node();
    // Node *fourth = new Node();

    display(head);
}