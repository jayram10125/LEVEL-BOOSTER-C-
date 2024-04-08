//convert decimal number into octal
#include<iostream>
using namespace std;
int main()
{
    int n,r,p,arr[32],i=0;
    cout<<"enter a decimal number : ";
    cin>>n;
    p=n;
    while(n!=0)
    {
        r=n%8;
        arr[i]=r;
        n=n/8;
        i++;
    }
    i--;
    cout<<"octal of "<<p<<" is : ";
    while(i>=0)
    {
        cout<<arr[i];
        i--;
    }
    return 0;
}