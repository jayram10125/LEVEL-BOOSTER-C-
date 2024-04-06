#include<iostream>
using namespace std;
int main()
{
    int a=2147483645;//2147483648(range)
    a=a+5;
    cout<<a; //-2147483646
    return 0;
}