#include <bits/stdc++.h>
using namespace std;

// to store value and node

class Node
{
public:
    int value;
    Node *next;

    // creating a constructor
    Node(int val)
    {
        value = val;
        next = NULL;
    }
};

void insetAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);

    // if head null then this will be work
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // if head!= NULL then this will be work.
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node *n)
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
    Node *head = NULL;
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