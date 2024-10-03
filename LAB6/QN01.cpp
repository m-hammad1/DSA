#include<iostream>
using namespace std;
int input(int arr[],int size,int target)
{
int start = 0;
int end = size-1;
int mid = (start + end )/ 2;
while( start <= end)
{
    if(target == arr[mid])
    {
       return mid;
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
return -1;
}
int main()
{
    int size=10;
    int mid =0;
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int target = 7;
    int result = input( arr,size,target);
    if (result == -1)
    {
        cout<<"Target not Found "<<endl;
    }
    else 
    { 
    cout << "The Target found at Index: " << result << endl;
    }
    return 0;
}