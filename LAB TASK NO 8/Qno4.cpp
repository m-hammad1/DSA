#include<iostream>
using namespace std;
class Node
{
public: 
int data;
Node* next;
Node* prev;
Node(int data)
{
this->data = data;
this->next = nullptr;
this->prev = nullptr;
}
};
class DoublyLinkedList{
public:
Node* head;
Node* tail;
DoublyLinkedList() {
head = nullptr;
tail = nullptr;
}
void insertAtHead(int d)
{
Node* temp = new Node(d);
if(head == nullptr)
{
head = temp;
tail = temp;
}
else {
temp->next = head;
head->prev = temp;
head = temp;
}
}
void insertAtTail(int d)
{
Node* temp = new Node(d);
if(tail == nullptr)
{
head = temp;
tail = temp;
}
else
{
tail->next = temp;
temp->prev = tail; 
tail = temp;
}
}
void insertAtAnyPosition(int position,int d)
{
if(position == 1)
{
insertAtHead(d);
return;
}
Node* temp = head;
int cnt = 1;
while(cnt < position - 1)
{
temp = temp->next;
cnt++;
}
if(temp == nullptr) {
insertAtTail(d);
return;
}
Node* nodetoinsert = new Node(d);
nodetoinsert->next = temp->next;
if(temp->next != nullptr)
temp->next->prev = nodetoinsert;
temp->next = nodetoinsert;
nodetoinsert->prev = temp;
if(nodetoinsert->next == nullptr)
tail = nodetoinsert;
}
void display()
{
Node* temp = head;
while(temp != nullptr)
{
cout << temp->data << "  ";
temp = temp->next;
}
cout << endl;
}
};
Node* merge(Node* &head1,Node* &head2)
{
    Node* p1 = head1;
    Node* p2 = head2;
    Node* DummyNode = new Node(-1);
    Node* p3 = DummyNode;
    while( p1 != NULL && p2 != NULL)
    {
        if(p1 -> data < p2 ->data)
        {
            p3->next = p1;
            p1= p1 -> next;
        }
        else 
        {
            p3 -> next= p2;
            p2 = p2 -> next;
        }
        p3 = p3 -> next;
    }
    while(p1 != NULL )
    {
        p3->next = p1;
        p1 = p1 -> next;
        p3 = p3 -> next;
    }
       while(p2 != NULL )
    {
        p3->next = p2;
        p2 = p2 -> next;
        p3 = p3 -> next;
    }
    return DummyNode->next;
}
int main()
{
Node* head1 = NULL;
Node* head2 = NULL;
DoublyLinkedList list1;
DoublyLinkedList list2;
list1.insertAtHead(5);
list1.insertAtAnyPosition(2,10);
list1.insertAtTail(15);
cout<<"List 1: "<<endl;
list1.display();
list2.insertAtHead(20);
list2.insertAtAnyPosition(2,30);
list2.insertAtTail(40);
cout<<"List 2: "<<endl;
list2.display();
cout<<"After Merging Lists: "<<endl;
Node* newhead = merge(list1.head, list2.head); 
DoublyLinkedList mergedList; 
mergedList.head = newhead; 
mergedList.display(); 
return 0;
}