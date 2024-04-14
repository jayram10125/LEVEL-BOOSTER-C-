// reference variable
#include<iostream>
using namespace std;
int main()
{
    int a=12;
    int &b=a;
    cout<<a<<" "<<b<<endl;
    a=50;
    cout<<a<<" "<<b<<endl;
    b=100;
    cout<<a<<" "<<b<<endl;

    
    return 0;
}