#include<iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    double d;
    cout<<"size of intiger : " <<sizeof(a)<<" bytes" <<endl;
    cout<<"size of float : " <<sizeof(b)<<" bytes" <<endl;
    cout<<"size of char : " <<sizeof(c)<<" bytes" <<endl;
    cout<<"size of double : " <<sizeof(d)<<" bytes" <<endl<<endl<<endl;


    cout<<"size of intiger : " <<sizeof(10)<<" bytes" <<endl; //4
    cout<<"size of float : " <<sizeof(12.56)<<" bytes" <<endl;//8 kyunki by default decimal number double hota bhai and double ka size 8 bytes hota hai
     cout<<"size of float : " <<sizeof(12.56f)<<" bytes" <<endl;//4 float ke size ke lye last me f add karte hai
    cout<<"size of char : " <<sizeof('a')<<" bytes" <<endl;//1
    cout<<"size of double : " <<sizeof(78.34)<<" bytes" <<endl<<endl<<endl;//8




    return 0;
}