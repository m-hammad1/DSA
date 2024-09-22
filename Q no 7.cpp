#include<iostream>
using namespace std;
int main()
{
	int a=1;
	int* ptr =&a;
	cout<<"Address of variable: "<<ptr<<endl;
	cout<<"Value of Variable: "<<*ptr;
	return 0;
}