//linear search
#include<iostream>
using namespace std;
int main()
{
    int n,search,index;
    bool flag=false;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the search element : ";
    cin>>search;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            index=i;
            flag = true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"element is found at index : "<<index+1;
    }
    else{
        cout<<"element is not found ";
    }
    
    return 0;
}