//find the maximum element of the array 
#include<iostream>
using namespace std;
int main()
{
    int n,min;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"minimum element is : "<<min;
    return 0;

}