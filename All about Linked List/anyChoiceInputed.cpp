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
void insetAtTail(Node *&head, int value);
void insetAtHead(Node *&head, int value);
int countOfLength(Node *&head, int value);
void display(Node *n);
void insertionAtSpecificPosition(Node *&head, int value);
int searchByValueUnique(Node *&head, int key);

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

int countOfLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
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
    cout << endl;
}

void insertionAtSpecificPosition(Node *&head, int pos, int value)
{
    int i = 0;
    Node *temp = head;

    while (i < pos - 2)
    {
        temp = temp->next;
        i++;
    }
    Node *newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}

int searchByValueUnique(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;

    while (temp->value != key)
    {
        if (temp->next == NULL)
        {
            return -1;
        }
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    Node *head = NULL;
    int n, position, choice;
    cout << "Choice 1: Insertion At Head" << endl
         << "Choice 2: Insertion At Tail" << endl
         << "Choice 3: Insertion At Specific Position" << endl
         << "Choice 4: Search a value (Unique List)" << endl
         << "Choice 0: Exit" << endl;
    cout << "Enter the choice";

    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value:";
            cin >> n;
            insetAtHead(head, n);
            break;
        case 2:
            cout << "Enter the value:";
            cin >> n;
            insetAtTail(head, n);
            break;
        case 3:
            cout << "Enter the desired position: ";
            cin >> position;
            cout << "Enter the value to insert:";
            cin >> n;
            insertionAtSpecificPosition(head, position, n);
            break;
        case 4:
            cout << "Enter the value to search: ";
            cin >> n;
            position = searchByValueUnique(head, n);
            if (position != -1)
            {
                cout << "The number is at: " << position << endl;
            }
            else
            {
                cout << "The number is not yet in the list." << endl;
            }

            break;

        default:
            break;
        }
        cout << "Next Choice: ";
        cin >> choice;
    }

    // Node *second = new Node();
    // Node *third = new Node();
    // Node *fourth = new Node();

    cout << endl
         << "Linked List: ";
    display(head);
    cout << "Length: " << countOfLength(head) << endl;
}