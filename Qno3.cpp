#include<iostream>
using namespace std;
int main()
{
	int k,size,i,found=-1;
	int* arr1= new int[size];
	cout<<"Enter size of the array: ";
	cin>>size;
	for(i=0;i<size;i++)
	{
	cout<<"Enter Element no "<<i+1<<" : ";
	cin>>arr1[i];
	}
	cout<<"Enter the number for search: ";
	cin>>k;
	for( i=0;i<size;i++)
	{
		if(arr1[i]==k)
		{
		found=i;
		break;	
     	}
	}
	if(found!=-1)
	{
	cout<<"Item found at index: "<<i;
	}
	else
	{
	cout<<"Item not found in the array";
	}
	return 0;
}