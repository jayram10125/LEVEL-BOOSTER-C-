//overloading example in class
#include<iostream>
using namespace std;
class A
{
    public:
    int area(int l ,int b)
    {
        return l*b;
    }
};
class B :public A
{
    public:
    int area(int l ,int b)
    {
        return l*b;
    }
    int area(int r)
    {
        return 3.14*r*r;
    }
    
};
int main()
{
    B obj;
    cout<<"area of circle is : "<<obj.area(7);
    cout<<"\narea of rectangle is : "<<obj.area(7,2);

    return 0;
}