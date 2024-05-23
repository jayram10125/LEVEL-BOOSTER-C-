//creating object
#include<iostream>
using namespace std;
class Abc
{
  int n;
  public:
  void display(int m)
  {
    n=m;
    cout<<n;
  }   
};
int main()
{
    Abc obj;
    obj.display(10);
    return 0;
}