//deletion of element from an array
#include<iostream>
using namespace std;
int main()
{
    int n,index;
    cout<<"enter number of elements in array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"before deletion of elements : ";
    for(int i=0;i<n;i++)
    {
        cout<<"arr"<<"["<<i<<"]="<<arr[i]<<"  ";
    }
    cout<<"\nenter the index that you want to delete : ";
    cin>>index;
    if(index>n)
    {
        cout<<"elements cant delete ";
        
    }
    else{
        for(int i=index;i<n-1;i++)
        {
         arr[i]=arr[i+1];   
        }
    }
    cout<<"after deletion : ";
    for(int i=0;i<n-1;i++)
    {
    cout<<"arr"<<"["<<i<<"]="<<arr[i]<<"  ";
    }

    return 0;
    
}