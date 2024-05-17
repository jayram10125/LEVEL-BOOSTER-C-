//undderstanding of virtual class
#include<iostream>
using namespace std;
class one
{
    public:
    void display()
    {
        cout<<"\n display of class one";
    }
};
class Two :  public virtual  one 
{
    public:
    void display2()
    {
        cout<<"\n display of class two";
    }
};
class Three  :  virtual public  one
{
    public:
    void display3()
    {
        cout<<"\n display of class three";
    }
};
class Four : public Two ,public Three
{
    public:
    void display4()
    {
        cout<<"\n display of class four";
    }
};
int main()
{
    Four obj;
    obj.display2();
    obj.display3();
    obj.display4();
    obj.display();
}