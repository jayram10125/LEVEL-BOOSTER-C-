// #include<iostream>
// using namespace std;
// class A
// {
//     int b,c;
//     public :
//     A(int x ,int y)
//     {
//         b=x;
//         c=y;
//     }
//     A(A &r)
//     {
//         b=r.b;
//         c=r.b;
//     }
//     void show()
//     {
//         cout<<b<<" "<<c<<endl;
//     }
// };
// int main()
// {
//     A obj1(10,20);
//     A obj2=obj1;
//     obj1.show();
//     obj2.show();

//     return 0;
// }

#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    A(A &r)
    {
        a=r.a;
        b=r.b;
    }
    void show ()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A obj1(10,20);
    A obj2=obj1;
    obj1.show();
    obj2.show();
    return 0;
}