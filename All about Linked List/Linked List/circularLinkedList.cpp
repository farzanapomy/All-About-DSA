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

// creating structure
struct Test
{
    int position[1000];
};

// initialization
void insetAtTail(Node *&head, int value);
void insetAtHead(Node *&head, int value);
int countOfLength(Node *&head, int value);
void display(Node *n);
void insertionAtSpecificPosition(Node *&head, int value);
int searchByValueUnique(Node *&head, int key);
void searchByValueDuplicate(Node *&head, int key);
Test searchByValueDuplicateReturn(Node *&head, int key);
void deletionAtHead(Node *&head);
void deletionAtTail(Node *&head);
// void deletionAtSpecificPosition(Node *&head, int position);
// void deletionByValueUnique(Node *&head, int value);
// Node *reversByNonRecursive(Node *&head);
// Node *reverseRecursive(Node *&head);
// int replaceInOddPosition(Node *&head, int value);
// int findMid(Node *&head);
// void makeCycle(Node *&head, int position);
// bool detectCycle(Node *&head);
// void removeCycle(Node *&head);

// functions

void insetAtTail(Node *&head, int value)
{
    Node *newNode = new Node(value);

    // if head null then this will be work
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        return;
    }
    // if head!= NULL then this will be work.
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    newNode->next = head; // newNode->next=temp->next;
    temp->next = newNode;
}

void insetAtHead(Node *&head, int value)
{
    /**
     *create new node
     *update of newNode-> next
     *update the tail with newHead
     *update of head
     */

    Node *newNode = new Node(value);
    newNode->next = head;
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    head = newNode;
}

int countOfLength(Node *&head)
{
    int count = 0;
    Node *temp = head;
    do
    {
        temp = temp->next;
        count++;
    } while (temp != head);
    return count;
}

void display(Node *head)
{

    if (head == NULL)
    {
        cout << "The Linked list is empty" << endl;
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->value;
        if (temp != head)
        {
            cout << "-->";
        }
    } while (temp != head);
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
    if (temp == NULL)
    {
        return -1;
    }
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

void searchByValueDuplicate(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;
    int flag = 0;
    int size;
    size = countOfLength(head);
    int position[size + 1], k = 1;

    while (temp != NULL)
    {
        if (temp->value == key)
        {
            // cout << count << " ";
            position[k] = count;
            k++;
            flag = 1;
        }
        temp = temp->next;
        count++;
    }

    if (flag == 0)
    {
        cout << "The search Value not yet in the list." << endl;
    }
    else
    {
        // store the value of array in k
        position[0] = k;
        cout << "The value is  found at position : ";
        for (int i = 1; i < position[0]; i++)
        {
            cout << position[i];
            if (i < position[0] - 1)
            {
                cout << ",";
            }
        }
        cout << endl;
    }
}

Test searchByValueDuplicateReturn(Node *&head, int key)
{

    Node *temp = head;
    int count = 1, k = 1;

    // initialize structure

    Test T;

    while (temp != NULL)
    {
        if (temp->value == key)
        {
            // cout << count << " ";
            T.position[k] = count;
            k++;
        }
        temp = temp->next;
        count++;
    }
    T.position[0] = k;
    return T;
}

void searchByValueUnique(Node *&head, int searchValue, int n)
{
    // search the position
    int position = searchByValueUnique(head, searchValue);

    // insert the value at the position+1
    insertionAtSpecificPosition(head, position + 1, n);
}

void deletionAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        Node *delNode = temp;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = delNode->next;
        head = delNode->next;
        delete delNode;
        cout << "Deleted successfully." << endl;
    }
    else
    {
        cout << "There is no value in the List." << endl;
    }
}

void deletionAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->next != head){
        while (temp->next->next != head)
        {
            temp = temp->next;
        }
        Node *delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        cout << "Deleted successfully." << endl;
    }
    else
    {

        // case 1 : Head is NULL
        if (temp == NULL)
        {
            cout << "There is no value in the List." << endl;
        }
        else
            deletionAtHead(head);
    }
}

void deletionAtSpecificPosition(Node *&head, int position)
{
    Node *temp = head;
    int i = 1;

    if (temp != NULL && position <= countOfLength(head))
    {
        if (position == 1)
        {
            deletionAtHead(head);
        }
        else if (position == countOfLength(head))
        {
            deletionAtTail(head);
        }
        else
        {
            while (i < position - 1)
            {
                temp = temp->next;
                i++;
            }

            Node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
    }
    else
    {
        // case 1: position is > countOfLength
        // if (position > countOfLength(head))
        cout << "Position out of Bound.";
        // case 2: List is NULL
        // else
        //     cout << "The number is not yet in the list." << endl;
    }
}

void deletionByValueUnique(Node *&head, int value)
{
    // Find the position of the value
    int position;
    position = searchByValueUnique(head, value);
    // delete the Node at that position
    if (position == -1)
    {
        cout << "Position not found in the List." << endl;
    }
    else
    {
        deletionAtSpecificPosition(head, position);
    }
}

Node *reversByNonRecursive(Node *&head)
{
    Node *prev = NULL;
    Node *current = head;
    if (head == NULL)
    {
        cout << "The linked list is empty." << endl;
        return head;
    }
    Node *next = head->next;

    while (true)
    {
        current->next = prev;
        prev = current;
        current = next;
        if (current == NULL)
        {
            break;
        }

        next = next->next;
    }
    return prev;
    // return prev;
}

int findMid(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    // case 1:  head is empty
    if (head == NULL)
    {
        return -1;
    }

    while (fast != NULL && fast->next != NULL)
    {
        // it will jump 1 step
        slow = slow->next;
        // it will jump 2 step
        fast = fast->next->next;
    }
    return slow->value;
}

int main()
{
    Node *head = NULL;
    int n, position, choice;
    cout << "Choice 1: Insertion At Head" << endl
         << "Choice 2: Insertion At Tail" << endl
         << "Choice 3: Insertion At Specific Position" << endl
         << "Choice 4: Deletion at Head" << endl
         << "Choice 5: Deletion at Tail" << endl
         << "Choice 6: Deletion at Specific Position" << endl
         //  << "Choice 7: Deletion by value (Unique List)" << endl
         //  << "Choice 6: Insertion after a specific value (Unique List)" << endl
         //  << "Choice 8: Display the list" << endl

         //  << "Choice 18: Finding the MID (Slow-Fast pointer method)" << endl
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

            deletionAtHead(head);
            break;
        case 5:
            deletionAtTail(head);
            break;
        case 6:
            display(head);
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