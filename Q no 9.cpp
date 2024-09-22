#include<iostream>
#include<cmath>
using namespace std;
void menu();
int Addition(int a, int b);
int Subtraction(int a, int b);
int Division(int a, int b);
int Multiplication(int number, int power);
int Power(int a, int b);
int main()
{
	menu();
	return 0;
}
void menu()
{
int choice,a,b,result;
cout<<"Calculator Menu"<<endl;
cout<<"1. Addition"<<endl;
cout<<"2. Subtraction"<<endl;
cout<<"3. Division"<<endl;
cout<<"4. Multiplication"<<endl;
cout<<"5. Power"<<endl;
cout<<"Select an option (1-5): ";
cin>>choice;
switch(choice)
{
case 1:
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	result= Addition(a,b);
	cout<<"Result: "<<result;
	break;
case 2:
    cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	result= Subtraction(a,b);
	cout<<"Result: "<<result;
	break;
case 3:
    cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
if (b != 0) 
{ 
result = Division(a, b);
cout << "Result: "<<result<<endl;
} else
{
cout << "Error: Division by zero is not allowed!" << endl;
}
	break;
case 4:
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	result= Multiplication(a,b);
	cout<<"Result: "<<result;
	break;
case 5:
	cout<<"Enter number: ";
	cin>>a;
	cout<<"Enter power of the number: ";
	cin>>b;
	result= Power(a,b);
	cout<<"Result: "<<result;
	break;
default:
	cout<<"Invalid Input"<<endl;
	break;
}
}
int Addition(int a, int b)
{
return a+b;
}
int Subtraction(int a,int b)
{
return a-b;
}
int Division(int a,int b)
{
return a/b;
}
int Multiplication(int a,int b)
{
return a*b;
}
int Power(int number, int power)
{
return pow(number,power);
}