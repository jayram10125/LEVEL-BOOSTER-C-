#include<iostream>
using namespace std;
int main()
{
    int n,s,f=0,temp;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];    // temp=arr[i];   
                arr[j]=arr[i];  // arr[i]=arr[j];
                arr[i]=temp;  // arr[j]=temp;

            }
        }
    }
    cout<<"sorted array : ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter the element that you want to search : ";
    cin>>s;
    int mid,low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==s)
        {
            f=1;
            break;
        }
        if(s>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    if(f==1)
        cout<<"searching successful";
        else
        cout<<"searching not successful";
    return 0;
}