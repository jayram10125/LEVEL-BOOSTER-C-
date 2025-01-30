//how many object is created or destroyed
#include<iostream>
using namespace std;
int count=0;
class A
{
    public:
    
    A()
    {
        count++;
        cout<<" object number "<<count<<" created : "<<endl;  
    }
    ~A()
    {
        cout<<" object number "<<count<<" created : "<<endl; 
        count--;
    }
};
int main()
{
    A a,b,c,d;
    return 0;
}
