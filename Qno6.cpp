#include<iostream>
using namespace std;
int main()
{
	int size,sum=0;
	int* arr1 = new int[size];
	cout<<"Enter Size of the array: "<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
	cout<<"Elements "<<i+1<<":";
	cin>>arr1[i];
	if(arr1[i]%2!=0)
	{
	sum =sum+arr1[i];
	}
	}
	cout<<"Sum of odd numbers: "<<sum;
	return 0;
}