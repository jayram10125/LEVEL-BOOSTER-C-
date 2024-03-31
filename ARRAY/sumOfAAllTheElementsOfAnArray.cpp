//sum of all the elements of an array
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"enter 10 elements of array : "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum of elements is : "<<sum;
    
    return 0;
}