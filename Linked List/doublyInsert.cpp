#include <iostream>
using namespace std;
// insert a node at head of doubly linked list

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert(Node *&head, int data)
{

    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = new Node;
        return;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void print(Node *head){
    Node *temp = head;
    while(temp!= NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;

    insert(head, 103);
    insert(head, 102);
    insert(head, 101);

    cout << "Printing : ";
    print(head);

    return 0;
}