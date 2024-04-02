//printing 1 to N & N to 1.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter limit : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    for(int i=n-1;i>=1;i--)
    {
        cout<<i<<" ";
    }

    return 0;
}