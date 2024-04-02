//check palindrome or not Ex. 1234321=>its a palindrome
#include<iostream>
using namespace std;
int main()
{
    int n,r,reverse=0;
    cout<<"enter a number : ";
    cin>>n;
    int p=n;
    for(;n!=0;)
    {
       r=n%10;
       reverse=reverse*10+r;
       n=n/10;
    }
     cout<<"reverse number : "<<reverse<<endl;
    if(p==reverse)
    cout<<"number "<<p<<" is a palindrome !!";
    else
    cout<<"number "<<p<<" is not a palindrome !!";
    return 0;
}