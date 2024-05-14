#include<iostream>
using namespace std;
class Abc
{
    int a,b,c;
    public:
    Abc(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c;
    }
    void operator - ()
    {
        a=-a;
        b=-b;
        c=-c;
    }
};
int main()
{
    Abc a(10,12,14);
    -a;
    a.display();

}