#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }

public:
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

void deleteHead(Node *&head)
{

    if (head == NULL)
    {
        return;
    }

    Node *temp = head;

    head = head->next;

    delete temp;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void deleteK(Node *&head, int k)
{
    if (head == NULL)
    {
        return;
    }

    if (k == 0)
    {
        deleteHead(head);
        return;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL && k > 0)
    {
        prev = temp;
        temp = temp->next;
        k--;
    }

    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
    delete temp;
}

int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }


    }

    // cout << "Printing List...." << endl;

    // printList(head);

    // cout << "Deleting Head...." << endl;

    // deleteHead(head);

    deleteK(head, 5);

    cout << "Printing List...." << endl;

    printList(head);




    return 0;
}