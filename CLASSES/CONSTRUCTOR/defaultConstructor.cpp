//an example of default constructor
#include<iostream>
using namespace std;
class A
{
    int b;
    public : 
    A()
    {
        b=10;
        cout<<b;
    }
};
int main()
{
    A obj;
    return 0;

}