//sum of individual digit Ex.123=>1+2+3=6
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    cout<<"enter a number : ";
    cin>>n;
    //while(n)
    //while(n>0)
    //while(n!=0)
    for(;n>0;)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    
    cout<<sum;
    
    return 0;
}