#include <iostream>
using namespace std;

// deleting tail node in linked list

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        this->data;
    }
};

void insert(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
    }
    tail = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int length(Node *head)
{
    int leg = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        leg++;
        temp = temp->next;
    }
    return leg;
}

void del(Node *head, Node *tail, int position)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    int len = length(head);

    if (position == len)
    {
        int i = 1;

        Node *prev = head;
        while (i < position - 1) // finding previous node
        {
            prev = prev->next;
            i++;
        }

        prev->next = NULL;
        Node *temp = tail;
        tail = prev;

        delete temp;
        return;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insert(head, tail, 1);
    insert(head, tail, 2);
    insert(head, tail, 3);
    insert(head, tail, 4);
    insert(head, tail, 5);

    cout << "Print actual Linked List : ";
    print(head);
    cout << "\n";

    del(head, tail, 5);

    cout << "After deleting node : ";
    print(head);

    return 0;
}