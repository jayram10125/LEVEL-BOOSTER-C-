#include<iostream>
using namespace std;
class student
{
    public :
    student()   //constructor
    {
        cout<<"i am constructor \n";
    }
    void display();
};
void student :: display()
{
    cout<<"i am display";
}
int main()
{
    student s1;
    s1. display();
    return 0;
}