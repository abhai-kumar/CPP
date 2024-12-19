#include <iostream>
using namespace std;

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

    // ~Node(){
    //     delete next;
    //     next = NULL;
    // }
};

void insertAthead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void deletion(Node *&head, int position)
{
    if (head == NULL)
    {
        cout << "cannot delete";
        return;
    }
    Node *temp = head;
    if (position == 1)
    {
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAthead(head, 20);
    insertAthead(head, 30);
    insertAthead(head, 40);
    insertAthead(head, 50);

    print(head);

    cout << endl;

    deletion(head,1);

    print(head);

    return 0;
}