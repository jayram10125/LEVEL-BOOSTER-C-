// understanding of hybrid inheritance by basic example
#include<iostream>
using namespace std;

class A
{
    public :
        void display()
        {
            cout<<"display of A \n";
        }
};
class B :public A
{
    public :
        void display1()
        {
            cout<<"display of B \n";
        }
};
class C :public A
{
    public :
        void display2()
        {
            cout<<"display of C \n";
        }
};
class D :public B ,public C
{
    public :
        void display3()
        {
            cout<<"display of D \n";
        }
};
int main()
{
    D obj;
    obj.display3();
    obj.display1();
    obj.display2();
    B obj1;
    obj1.display();
    return 0;
}