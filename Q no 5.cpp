#include<iostream>
using namespace std;
int main()
{
	int totalsum = 0,avg;
	int arr1[3][3]={ {1,2,3}, {4,5,6}, {7,8,9}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		totalsum += arr1[i][j];
		}
	}
	avg =totalsum/9;
	cout<<"Total Sum of the array: "<<totalsum<<endl;
	cout<<"Average of all the elements: "<<avg<<endl;
	return 0;
}