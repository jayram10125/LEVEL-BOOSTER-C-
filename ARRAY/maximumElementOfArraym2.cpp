//find the maximum element of the array 
#include<iostream>
using namespace std;
int main()
{
    int n,max;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"maximum element is : "<<max;
    return 0;
}