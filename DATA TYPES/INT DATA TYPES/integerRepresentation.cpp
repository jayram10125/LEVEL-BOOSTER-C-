//decimal representation
//octal      "    "
//hexal      "    "
#include<iostream>
using namespace std;
void decimal()
{
    int a=17;
    cout<<a<<endl;  //17
}
void octal()
{
    int a=017;      // if a number starts with zero then its called octal so o/p will be is its decimal formate
    cout<<a<<endl; //15
}
void hexal()
{
    int a=0x17; //23  if a number starts with 0x then its called hexal so o/p will be is its decimal formate
    int b=0xface;//64206
    cout<<a<<endl;
    cout<<b;
}
int main()
{
    decimal();
    octal();
    hexal();

    return 0;
}