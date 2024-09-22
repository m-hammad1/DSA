#include<iostream>
using namespace std;

int main(){

    int arr[2][2];
    int Sum;
    int Mul;
    int Avg;

    cout<<"Array Elements : "<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           cout<<"Enter element: ";
           cin>>arr[i][j]; 
           cout<<endl;
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
           Sum+=arr[i][j];
           Mul*=arr[i][j];
        }
    }

    Avg = Sum/4;

    cout<<"Sum of array: "<<Sum<<endl;
    cout<<"Multiplication of array: "<<Mul<<endl;
    cout<<"Average of array: "<<Avg<<endl;

}