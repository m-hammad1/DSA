#include<iostream>
using namespace std;
class Queue
{
private:
    int i=0,k=0;  
    string A = "Data Structure and Algorithms "; 
    string firstword, secondword, thirdword, fourthword,combo;  
public:
void DeQueue()
{
for (i=0; i<A.length();i++)  
{
if (A[i] !=' ')  
{
if (k==0)
{
firstword += A[i];  
}
else if (k==1)
{
secondword += A[i]; 
}
else if (k==2)
{
thirdword += A[i];  
}
else if (k==3)
{
fourthword += A[i];  
}
}
else
{
k++;  
}
}
}
void display()
{
cout << "Queue 1: " << firstword << endl;
cout << "Queue 2: " << secondword << endl;
cout << "Queue 3: " << thirdword << endl;
cout << "Queue 4: " << fourthword << endl;
}
void concatenate()
{
combo = firstword + ' ' + secondword + ' ' + thirdword + ' ' + fourthword;
cout<<"Concatenated String: "<<combo;
}
};
int main()
{
    Queue Q;
    Q.DeQueue();  
    Q.display();  
    Q.concatenate();
    return 0;
}
