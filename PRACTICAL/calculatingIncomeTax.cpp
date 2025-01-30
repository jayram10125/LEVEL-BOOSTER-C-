//WAP to implement friend function for calculating income tax for objects of two different classes
#include<iostream>
using namespace std;
class incomeTax
{
    int a,b;
    public:
    void getdata();
    friend int sum(incomeTax obj);
};
void incomeTax::getdata()
{
    cout<<"enter two values : ";
    cin>>a>>b;
}
int sum(incomeTax obj)
{
    return (obj.a+obj.b);
}
int main()
{
    incomeTax obj;
    obj.getdata();
    cout<<"addition is : "<<sum(obj);
    return 0;
}
