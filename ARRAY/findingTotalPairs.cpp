// find total number of pairs whose sum is equal to a given number x.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,6,4,8,0,5,7,1,3,9};
    int n,doublets=0;
    cout<<"eneter a number : ";
    cin>>n;
    cout<<"pairs are : "<<endl;
    for(int i=0;i<10;i++)
    {
    for(int j=i+1;j<10;j++)
    {
        if(arr[i]+arr[j]==n)
        {
            doublets+=1;
            cout<<"("<<arr[i] <<","<< arr[j] <<")"<<endl;
        }
    }
    }
    cout<<"total pairs whose sum is "<<n<<" are : "<<doublets;
    
    return 0;
}