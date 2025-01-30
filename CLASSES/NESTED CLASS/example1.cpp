#include<iostream>
using namespace std;
class first
{
    public:
    class second
    {
        public:
        int a=5;
        void display()
        {
            cout<<"a = "<<a<<endl;
        }

    };
};
int main()
{
    first::second s;
    s.display();
    return  0;
}