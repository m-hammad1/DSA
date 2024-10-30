#include<iostream>
using namespace std;
class Node
{
public: 
int data;
Node* next;
Node* prev;
          // constructor 
Node(int data)
{
this -> data = data;
this -> next = nullptr;
this -> prev = nullptr;
}
void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    if(head == nullptr)
    {
        head = temp;
    }
   else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    if( temp == nullptr)
    {
        temp =tail;
    }
    else
    {
        tail -> next = temp;
        temp -> prev = tail; 
        temp -> next = NULL;
        tail = temp;
    }
}
void insertAtAnyPosition( Node* &tail,Node*& head,int position,int d)
{
    Node* temp = head;
    int cnt =1;
    if(head == NULL)
    {
        temp = head;
        return;
    }
    while(cnt < position -1)
    {
        temp = temp -> next;
        cnt++;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert-> next = temp -> next;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;
    temp-> next -> prev = nodetoinsert;
    if( nodetoinsert ->next == NULL)
    {
        insertAtTail(tail,d);
        tail = nodetoinsert;
        return;
    }
}
int countNodes(Node* &head)
{
int length = 0;
Node* temp = head;
while(temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
void display(Node* &head)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout<<temp -> data<<"  ";
        temp = temp -> next;
    }
    cout<<endl;
}
};
int main()
{
    Node N(10);
    Node* Node1 = new Node(20);
    Node* head = Node1;
    Node* tail = Node1;
    N.insertAtHead(head,5);
    N.insertAtTail(tail,25);
    N.insertAtAnyPosition(tail,head,2,10);
    N.insertAtAnyPosition(tail,head,3,15);
    N.display(head);
    int length = N.countNodes(head);
    cout<<"Length of the Doubly Linked List: "<<length;
    return 0;
}