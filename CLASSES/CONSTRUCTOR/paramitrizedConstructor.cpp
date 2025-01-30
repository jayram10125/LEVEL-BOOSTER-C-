//example of paramitrized constructor
#include<iostream>
using namespace std;
class A
{
    public:
    A(int a)
    {
        cout<<"the initialization value of a is : "<<a;
    }
};
int main()
{
    A a(10);
    return 0;
}