#include<iostream>
using namespace std;
class Queue
{
private:
int size,front,rear;
int* arr1;
public:
Queue()
{
size =5;
rear =-1;
front =-1;
arr1 = new int[size];
}
void Enqueue(int value)
{
if(rear == 5)
{
    cout<<"\nQueue Overflow";
}
else
{
rear++;
arr1[rear]=value;
cout<<"\nEnQueue: "<<arr1[rear];
}
}
void Dequeue(int num)
{
if(front == -1 && rear ==-1)
{
cout<<"Queue Underflow";
}
else
{
front++; 
arr1[front]=num;
cout<<"\nDeQueue: "<<arr1[front];   
}
}
bool isEmpty()
{
    if(rear =-1)
    {
    cout<<"\nQueue Empty";
    rear =5;
    }
    else
    {
    cout<<"\nQueue is not empty";
    }
}
void Display()
{
    for(int i=0;i<rear;i++)
    {
    cout<<endl;
    cout<<"Dispaly: "<<arr1[i];
    }
}
};
int main()
{
    Queue Q;
    Q.Enqueue(1);
    Q.Enqueue(2);
    Q.Enqueue(3);
    Q.Enqueue(4);  
    Q.Enqueue(5);
    Q.Dequeue(1);
    Q.Dequeue(2);
    Q.Dequeue(3);
    Q.Dequeue(4);
    Q.Dequeue(5);
    Q.isEmpty();
    Q.Display();
    return 0;
}