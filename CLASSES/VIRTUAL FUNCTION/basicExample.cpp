#include<iostream>
using namespace std;
class A 
{
    public:
    void virtual display()=0;
    // {
    //     cout<<"base\n";
    // }

};
class B : public A{
    public:
    void  display()
    {
        cout<<"derived\n";
    }
};
int main()
{
    system("cls");
//// class A se A ko call karna
    // A a,*b;
    // b=&a;
    //a.display();
    // b->display();


////class B se B ko call karna 
    // B a,*b;
    // b=&a;
    // a.display();
    // b->display();


////class A se class B ko call karna  
    A *a;
    B b;
    a=&b;
    a->display();


    return 0;
}