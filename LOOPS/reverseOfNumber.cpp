//reverse a number Ex. 12376=>67321
#include<iostream>
using namespace std;
int main()
{
    int n,r,reverse=0;
    cout<<"enter a number : ";
    cin>>n;
    for(;n!=0;)
    {
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    cout<<"reverse number : "<<reverse;
    return 0;
}