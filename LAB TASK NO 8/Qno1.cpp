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
int getlength(Node* &head)
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
void insertAtMiddle(Node* &head,Node* &tail,int d)
{
int length = getlength(head);
int middle = length / 2;
Node* temp = head;
int cnt = 1;
while( cnt < middle)
{
    temp = temp -> next;
    cnt ++;  
}
Node* nodetoinsert = new Node(d);
if( length % 2 == 0)
{
    nodetoinsert -> next = temp;
    nodetoinsert -> prev = temp -> prev ;
    if(temp -> prev)
    {
        temp -> prev -> next = nodetoinsert;
        temp -> prev = nodetoinsert;
    }
    if( temp == head)
    {
        head = nodetoinsert;
    }
} 
else 
{
nodetoinsert -> next = temp -> next;
nodetoinsert -> prev = temp;
if (temp -> next)
temp -> next -> prev = nodetoinsert;
temp -> next = nodetoinsert;    
if( nodetoinsert -> next == nullptr)
{
    tail = nodetoinsert;
}
}
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
    Node* Node1 = new Node(4);
    Node* head = Node1;
    Node* tail = Node1;
    N.insertAtHead(head,2);
    N.insertAtTail(tail,8);
    cout<<"Link List: "<<endl;
    N.display(head);
    cout<<"After Middle Insertion In Odd Case: "<<endl;
    N.insertAtMiddle(head,tail,6);
    N.display(head);
    cout<<"Afetr Middle Insertion In Even Case: "<<endl;
    N.insertAtMiddle(head,tail,10);
    N.display(head);
    return 0;
}