#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void printReverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int generateRandomNumber(int lower)
{
    srand(static_cast<unsigned>(time(0)));

    // Generate a random number between 0 and RAND_MAX
    // int randomNumber = rand(); Generate

    // int lower = 1;
    int upper = 100;
    int randomInRange = (rand() % (upper - lower + 1)) + lower;

    cout << randomInRange << " ";

    return randomInRange;
}

void insertAtHead(Node *&head, int data)
{   
    if(head==NULL){
        Node *newNode = new Node(data);
        head = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node *&tail, Node* &head, int data)
{   
    if(head==NULL){
        Node *newNode = new Node(data);
        head= newNode;
        tail=newNode;
        return;
    }

    Node *newNode = new Node(data);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{   cout<<"Data: "<<data<<" Inserted at: "<<position<<endl;
    if(position<1 ||  position>getLength(head)+1){
        cout<<"Invalid Position"<<endl;
        return;
    }

    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    if (position == getLength(head)+1)
    {
        insertAtTail(tail, head ,data);
        return;
    }

    Node *newNode = new Node(data);
    Node* temp = head;
    for(int i=1;i<position-1; i++){
        temp=temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev=newNode;
    temp->next=newNode;
    
}


void deleteLinkedList(Node*&head, int position){

     if(position<1 ||  position>getLength(head)+1){
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(head==NULL){
        cout<<"No Node present in this linkedList"<<endl;
        return;
    }


    Node* temp = head;
    Node *previous = head;

    for(int i=1;i<position-1; i++){
        temp= temp->next->next;
        previous->next = temp;
    }

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Node *firstNode = NULL;
    Node *head = firstNode;
    Node *prev = head;
    int n = 5;
    cout << "RandomNumber\n";
    for (int i = 0; i < n; i++)
    {
        int randomNumber = generateRandomNumber(i);
        //  Node *newNode = new Node(randomNumber);
        //  newNode->prev=prev;
        //  prev->next=newNode;
        //  prev = newNode;
        // insertAtHead(head, randomNumber);
        insertAtTail(prev, head ,randomNumber);
    }
    cout << "\n";
    cout<<"InsertAtPostion\n";
    insertAtPosition(head, prev, 2, 3008);
    cout << "Start" << endl;
    print(head);
    cout << "Reverse" << endl;
    printReverse(prev);
}