#include<iostream>
using namespace std;
class first
{
    private :
    int a;
    public :
        class second
        {
            public :
            int b=5;
            void display()
            {
                cout<<"b= "<<b<<endl;
            }
        };
};
int main()
{
    first::second s;
    cout<<"b= "<<s.b<<endl;
    s.display();
    return 0;
}