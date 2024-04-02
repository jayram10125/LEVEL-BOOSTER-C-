// check a number is armstrong or not .Ex.abc=>a^3+b^3+c^3=abc (153,370,371)
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,x;
    cout<<"enter a number : ";
    cin>>n;
    x=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(x==sum)
    cout<<"armstrong number";
    else
    cout<<"not an armstrong number";
    return 0;
}