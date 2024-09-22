#include<iostream>
using namespace std;
class stack 
{
private:
int top;
int arr1[1];
public:
  stack()
  {
    top=-1;
  }
void push()
{
if(top==9)
{
cout<<"\nStack Overflow";}		
else
{  
   for(int i=0;i<1;i++){
    cout<<"Enter "<<i<<" Element: ";
	cin>>arr1[top+=1];
	cout<<endl;}
}
}
void pop()
{
if(top==-1)
{
	cout<<"Stack Empty";}	
else
{    
   for(int i=0;i<10;i++){
	cout<<"\nElment "<<top<<" empty: ";
	arr1[top-=1];
	}
}
}
void peek(){
cout << "Take a peek at top element: " <<
arr1[top] << endl;
}
void clear()
{
}
void empty()
{
if(top==-1)
{
cout<<"Stack empty";}
else
{
cout<<"stack is not empty";	
}
}
~stack()
{ 
}
};
int main()
{
stack st;
st.push();
st.pop();
st.peek();
st.clear();
st.empty();
return 0; 
}