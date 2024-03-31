/* count the number of elements in given array grater than a given numbers*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,5,2,7,9,8,6};
    int n,count=0;
    cout<<"enter the number you want to compare with : ";
    cin>>n;
    for(int i=0;i<50;i++)
    {
        count++;
        if(arr[i]==6)
        break; 
    }
    
    if(count>n)
    {
        cout<<" number of elements in array is grater than entered number ";
    }
    else
    {
        cout<<" number of elements in array is not grater than entered number ";
    }
    return 0;
}