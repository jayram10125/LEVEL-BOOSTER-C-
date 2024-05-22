//division of two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    try
    {
       if(b!=0)
       {
        c=a/b;
        cout<<"division is : "<<c;
       }
       else
       {
        throw(b);
       }
    }
    catch(int e)
    {
        cout<<"division by "<<e<<" is not possible ";
    }
    return 0;
    
}