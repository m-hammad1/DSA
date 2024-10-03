#include<iostream>
using namespace std;
int FirstOccurance(int arr[],int size,int target)
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
int LastOccurance(int arr[],int size,int target)
{
int start = 0,result;
int end = size-1;
int mid = (start + end )/ 2;
while( start <= end)
{
    if(target == arr[mid])
    {
        result = mid;
        start = mid + 1;
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
int FindOccurances(int arr[],int size,int target)
{
    int firstIndex = FirstOccurance(arr,size,target);
    // If the target is not found, return 0
    if (firstIndex == -1) {
        return 0;
    }
    int lastIndex = LastOccurance(arr, size, target);
    
    // The number of occurrences is (lastIndex - firstIndex + 1)
    return (lastIndex - firstIndex + 1);
}
int main()
{
    int size=10;
    int mid =0;
    int arr[]={0,1,2,3,3,3,6,7,8,9};
    int target = 3;
    //int index = FirstOccurance( arr,size,target);
 int count = FindOccurances(arr, size, target);
    
    cout << "The number of occurrences of " << target << " is: " << count << endl;
    return 0;
}