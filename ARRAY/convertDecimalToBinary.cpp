//convert decimal number into binary
#include<iostream>
using namespace std;
int main()
{
    int n,p,r,arr[32],i=0;
    cout<<"enter a decimal number : ";
    cin>>n;
    p=n;
    while(n!=0)
    {
        r=n%2;
        arr[i]=r;
        n=n/2;
        i++;
    }
    i--;
    cout<<"binary of "<<p<<" is : ";
    while(i>=0)
    {
        cout<<arr[i];
        i--;
    }
    return 0;
    
}