//understanding of hierarichal inheritance by basic example
#include<iostream>
using namespace std;
class A
{
    public :
    void display()
    {
        cout<<"display of A\n";
    }
};
class B : public A
{
    public :
    void display2()
    {
        cout<<"display of B\n";
    }
};
class C : public A
{
    public :
    void display3()
    {
        cout<<"display of C\n";
    }
};
class D : public A
{
    public :
    void display4()
    {
        cout<<"display of D\n";
    }
};
int main()
{
    D obj;
    obj.display();
    obj.display4();
    B obj1;
    obj1.display2();
    obj1.display();
    C obj2;
    obj2.display3();
    obj2.display();

    return 0;
}