#include<iostream>
using namespace std;
int main()
{
    int a=2147483646;
    a=a+5; // -2147483645
    cout<<a;
    return 0;
}