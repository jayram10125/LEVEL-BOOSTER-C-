//area of circle and rectangle
#include<iostream>
#include "myheader.h"
using namespace std;

int main()
{
int l,b,r;
char ch;
cout<<"enter length and breadth for rectangle : ";
cin>>l>>b;
cout<<"enter radius of circle : ";
cin>>r;
cout<<"area of rectangle is : "<<area(l,b)<<endl;
cout<<"area of circle is : "<<area(r);

    return 0;
}
