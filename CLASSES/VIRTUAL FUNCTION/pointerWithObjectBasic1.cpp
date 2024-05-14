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
    Abc A ,*B;
    A.inc();
    A.inc();
    A.display();
    cout<<"hii\n";
    B=&A;
    B->display();
    B->inc();
    B->inc();
    A.display();

   
   

    return 0;
}