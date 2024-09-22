#include<iostream>
using namespace std;
int main()
{
	int arr1[10],max=0,low;
	cout<<"Enter 10 values for an array: "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Element "<<i+1<<": "<<endl;
		cin>>arr1[i];
		if(max<arr1[i])
		{
	    max=arr1[i];
		}
		if(low>arr1[i])
		{
		low=arr1[i];
		}
	}
	cout<<"Largest Number: "<<max<<endl;
	cout<<"Smallest Number: "<<low;
	return 0;
}