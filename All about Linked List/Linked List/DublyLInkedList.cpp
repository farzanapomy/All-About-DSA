#include <bits/stdc++.h>
using namespace std;

// to store value and node

class DoublyNode
{
public:
    int value;
    DoublyNode *next;
    DoublyNode *prev;

    DoublyNode(int value)
    {
        this->value = value;
        next = NULL;
        prev = NULL;
    }
};

// initialization
void insetAtTail(DoublyNode *&head, int value);
void insertAtHead(DoublyNode *&head, int value);
void display(DoublyNode *&n);
int countOfLength(DoublyNode *&head);

void insetAtTail(DoublyNode *&head, int value)
{
    DoublyNode *newNode = new DoublyNode(value);

    // if head null then this will be work
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // if head!= NULL then this will be work.
    DoublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtHead(DoublyNode *&head, int value)
{
    /**
     *create new node
     *update of newNode-> next
     *update of head
     */
    DoublyNode *newNode = new DoublyNode(value);
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void display(DoublyNode *&n)
{
    cout << "The Doubly Linked list is: ";
    while (n != NULL)
    {
        cout << n->value;
        if (n->next != NULL)
        {
            cout << " ---> ";
        }
        n = n->next;
    }
    cout << endl;
}

void displayReverse(DoublyNode *&head)
{
    DoublyNode *temp = head;

    if (temp != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        while (temp != NULL)
        {
            cout << "The Doubly Linked list is: ";
            cout << temp->value;
            if (temp->prev != NULL)
            {
                cout << "->";
            }
            temp = temp->prev;
        }
        cout << endl;
    }
    else
    {
        cout << "There is no value in the List." << endl;
    }
}

int countOfLength(DoublyNode *&head)
{
    int count = 0;
    DoublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    DoublyNode *head = NULL;
    int n, position, choice;
    cout << "Choice 1: Insertion At Head" << endl
         << "Choice 2: Insertion At Tail" << endl
         << "Choice 3: Display the list" << endl
         << "Choice 4: Display as Reversal" << endl
         << "Choice 5: Search a value (Unique List)" << endl
         << "Choice 0: Exit" << endl;
    cout << "Enter the choice: ";

    cin >> choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the value:";
            cin >> n;
            insertAtHead(head, n);
            break;
        case 2:
            cout << "Enter the value:";
            cin >> n;
            insetAtTail(head, n);
            break;
        case 3:
            display(head);
            break;
        case 4:

            displayReverse(head);
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
    cout << "The Length of Doubly Linked List: " << countOfLength(head) << endl;
}