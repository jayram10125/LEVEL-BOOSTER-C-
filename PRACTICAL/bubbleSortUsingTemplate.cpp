//WAP to implement BuBBle Sort Using Templates
#include<iostream>
using namespace std;
template <class T>
void bubbleSort(T arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
template <class T>
void printArray(const T arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1,4,3,7,6};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    cout<<"sorted array : ";
    printArray(arr,n);
    return 0;
}


