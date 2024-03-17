#include<iostream>
using namespace std;
int main()
{
    const int a=10;
   // a=20;  we can't update the constant value
   cout<<"constant value : "<<a<<endl;
   int b=50;
   b=100; //can update easily;
   cout<<"value of variable b is  : "<<b;

    return 0;
}