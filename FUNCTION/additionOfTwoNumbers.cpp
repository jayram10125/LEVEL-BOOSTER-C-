//addition of two numbers
#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"enter first and second number : ";
    cin>>a>>b;
    cout<<"addition is : "<<add(a,b);
    return 0;
}