#include<iostream>
using namespace std;
class Node
{
public: 
string name;
int semester;
int sap_id;
Node* next = NULL;
Node* prev = NULL;
Node(string name,int semester,int sap_id)
{
this -> name = name;
this -> semester = semester;
this -> sap_id = sap_id;
this -> next = NULL;
this -> prev = NULL;
}
~Node()
{
    int val = this -> sap_id;
    if(next != NULL)
    {
        delete next;
        next = NULL; 
    }
    cout<<"memory free for node with data " << val<<endl;
}
void insertAtHead(Node* &tail,Node* &head, string name,int semester,int sap_id)
{
    Node* temp = new Node(name,semester,sap_id);
    if(head == NULL)
    {
    head = temp;
    tail = temp;
    }
    else 
    {
    temp -> next = head;
    head -> prev = temp; 
    head = temp;
    head -> prev = NULL;       //extra line
    return;
    }
}
void insertAtTail(Node* &tail,Node* &head,string name, int semester,int sap_id)
{
    Node* temp = new Node(name,semester,sap_id);
    if(tail == NULL)
    {
    tail = temp;
    head = temp;
    }
    else
    {
    tail -> next = temp;
    temp-> prev = tail;
    temp -> next = NULL;        //extra line
    tail = temp;
    }
}
void insertAtAnyPosition(Node* &tail,Node* &head,int position,string name,int semester,int sap_id)
{
    Node* temp = head;
    int cnt =1;
    if(position == 1)
    {
        insertAtHead(tail,head,name,semester,sap_id);
        return;
    }
    while(cnt < position -1)
    {
        temp = temp -> next;
        cnt++;
    }
    Node* nodetoinsert = new Node(name,semester,sap_id);
    nodetoinsert-> next = temp -> next;
    temp -> next = nodetoinsert;
    nodetoinsert -> prev = temp;
    temp-> next -> prev = nodetoinsert;
    if( nodetoinsert ->next == NULL)
    {
        insertAtTail(tail,head,name,semester,sap_id);
        tail = nodetoinsert;
    }
}
void DeleteNode(Node* &tail,Node* &head, int position)
{
if(position == 1)
{
    Node* temp = head;
    temp -> next -> prev = NULL;
    head = temp -> next;
    temp -> next = NULL;
    delete temp;
}
else 
{
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;
    while ( cnt < position )
    {
    prev = curr;
    curr = curr -> next;
    cnt++;
    }
    //curr -> next -> prev = prev;    //extra code
    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;
    if (curr->next == nullptr) 
    {
            tail = prev;
    }
    delete curr;
}
}
void display (Node* &head)
{
Node* temp = head;
 while(temp != NULL)
    {
        cout<< temp -> name<<" / "<<temp -> semester<<" / "<<temp -> sap_id<<"  ===>  ";
        temp = temp->next;
    }
    cout<<endl;
}
};
int main()
{
    Node N("Ahmed",3,78909);
    Node* Node1 = new Node("Abdullah",3,783132);
    Node* head = Node1;
    Node* tail = Node1;
    N.insertAtHead(tail,head,"Hammad",3,56109);
    N.insertAtTail(tail,head,"Anas",3,56120);
    N.insertAtAnyPosition(tail,head,2,"Saleh",3,56111);
    N.insertAtAnyPosition(tail,head,3,"Student",3,56170);
    cout<<"Following is the pattern of Linked List: (Name/Semester/Sap id)"<<endl;
    cout<<endl<<"Before Deletion: "<<endl;
    N.display(head);
    cout<<endl<<"After Deletion: "<<endl;
    N.DeleteNode(tail,head,3);
    N.display(head);
    cout<< endl;
    return 0;
}