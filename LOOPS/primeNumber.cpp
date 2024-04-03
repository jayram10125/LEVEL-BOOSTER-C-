// check the given number is prime or not
#include<iostream>
using namespace std;
int main()
{ int n,a=0;
cout<<"enter a number : ";
cin>>n;
for(int i=2;i<=n-1;i++)
{
    if(n%i==0)
    {
        a=1;
        break;
    }
}
if(a==0)
cout<<"this is a prime number ";
else
cout<<"this is not a prime number : ";
    
    return 0;
}