#include<iostream>
using namespace std;
int main()
{
	const int num =12;
	int avg,low=0;
	string months[num] = {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};                 
	double rainfall[num];     
	double totalrainfall =0;
	double high=0;
	for(int i=0;i<num;i++)
	{
	cout<<"\nEnter Rainfall for "<<months[i]<<" in mm: ";
	cin>>rainfall[i];
	totalrainfall = totalrainfall + rainfall[i];
	if(high<rainfall[i])
	{
		high=rainfall[i];
	}
	if(low>rainfall[i])
	{
		low=rainfall[i];
	}
	}  
	avg = totalrainfall/12;      
	cout<<"\n Total rainfall for the year: "<<totalrainfall<<" mm"<<endl;   
	cout<<"Average rainfall of the year: "<<avg<<" mm"<<endl;
	cout<<"\n Highest Rainfall: "<<high<<" mm";     
	cout<<"\n Lowest Rainfall: "<<low<<" mm";   
	return 0;
}