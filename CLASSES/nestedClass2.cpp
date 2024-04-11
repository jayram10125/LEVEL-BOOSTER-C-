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
    second s;
};
int main()
{
    first f;
    cout<<"b= "<<f.s.b<<endl;
    f.s.display();
    return 0;
}