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

void insetAtHead(Node *&head, int value)
{
    /**
     *create new node
     *update of newNode-> next
     *update of head
     */
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
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
    cout << "Choice 1: Insertion At Head" << endl
         << "Choice 2: Insertion At Tail" << endl
         << "Choice 3: Exit" << endl;
    int choice = 2;

    while (choice !=0)
    {
        cout << "Enter the value:";
        cin >> n;
        switch (choice)
        {
        case 1:
            insetAtHead(head, n);
            break;
        case 2:
            insetAtTail(head, n);
            break;
        // case 3:
        //     exit;
        //     break;

        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    // Node *second = new Node();
    // Node *third = new Node();
    // Node *fourth = new Node();

    display(head);
}