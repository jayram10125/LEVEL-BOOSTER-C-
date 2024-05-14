//understanding the need of pointer with object
#include<iostream>
using namespace std;
class Abc
{
   public:
   void display()
   {
    cout<<" hello";
   }

};
class Bbc:public Abc
{
   public:
   void display(int a)
   {
    cout<<" hii";
   }
   
};

int main()
{
   Abc a;
   a.display() ;
   Bbc p;
   p.display(2);
   //p.display();

    return 0;
}