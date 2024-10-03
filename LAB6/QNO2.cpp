#include<iostream>
using namespace std;
int input(int arr[],int size,int target)
{
int start = 0,result;
int end = size-1;
int mid = (start + end )/ 2;
while( start <= end)
{
    if(target == arr[mid])
    {
        end = mid -1;
        result = mid;
    }
    else if(target < arr[mid])
    {
        end = mid - 1; 
    }
    else if(target > arr[mid])
    {
        start = mid + 1;
    }
        mid = (start + end )/ 2;
}
return result;
}
int main()
{
    int size=10;
    int mid =0;
    int arr[]={0,1,2,3,3,5,6,7,8,9};
    int target = 3;
    int index = input( arr,size,target);
    if (index == target)
    {
        cout<<"The First Occurance is at Index: "<<index<<endl;
    }
    else 
    { 
    cout<<"Target not found in the array"<<endl;
    }
    return 0;
}