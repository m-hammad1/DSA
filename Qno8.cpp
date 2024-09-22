#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter value of variable a: ";
cin>>a;
cout<<"Enter value of variable b: ";
cin>>b;
int* ptra=&a;
int* ptrb=&b;
cout<<"Value of variable a: "<<*ptra<<endl;
cout<<"Value of variable b: "<<*ptrb;
return 0;
}