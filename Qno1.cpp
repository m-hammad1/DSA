#include<iostream>
using namespace std;
int main()
{
	int arr1[10],max=0;
	cout<<"Enter Age of 10 Students "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Age of "<<i+1<<" Student: ";
		cin>>arr1[i];
		if(max<arr1[i])
		{
		max = arr1[i];	
		}
	}
	cout<<"\nStudent with largest age: "<<max;
	return 0;
}