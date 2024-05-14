//understanding the need of pointer with object
#include<iostream>
using namespace std;
class Abc
{
   
    int n;
    public:
    Abc()
    {
        n=10;
    }
    void inc()
    {
        ++n;
    }
    void display()
    {
        cout<<"the value of n is : "<<n<<endl;
    }

};
int main()
{
    Abc A;
    Abc *B;
    B=&A;
    A.inc();
    A.inc();
    A.display();
    B->display();
   

    return 0;
}