//printing odd between two numbers 
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter initial number : ";
    cin>>n;
    cout<<"even final number : ";
    cin>>m;
    cout<<"odd numbers are : ";
    for(int i=n;i<=m;i++)
    {
        if(i%2!=0)
        cout<<i<<" ";
    }
    return 0;
}