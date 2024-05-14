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
    void display(){
    
        cout<<n;
    }
    void operator - ()
    {
        n=-n;
    }
};
int main()
{
    Abc A;
    //A.display();
    -A;     //void operator - ()  
    A.display();

    return 0;
}
