//printing even number till  N
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter limit : ";
    cin>>n;
    cout<<"even numbers are : ";
    for(int i=0;i<=n;i=i+2)
    {
        cout<<i<<" ";
    }
    return 0;
}