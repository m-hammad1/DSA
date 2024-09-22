#include<iostream>
using namespace std;
int main()
{
   int a=4,b=3,temp;
   cout<<"Before Swapping "<<endl;
   cout<<"a = "<<a<<endl;
   cout<<"b = "<<b<<endl;
   int* ptr1= &a;
   int* ptr2= &b;
   temp = *ptr1;
   *ptr1 =*ptr2;
   *ptr2 = temp;
   cout<<"After Swapping"<<endl;
   cout<<"a = "<<a<<endl;
   cout<<"b= "<<b;
    return 0;
}