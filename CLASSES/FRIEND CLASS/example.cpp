#include<iostream>
using namespace std;
// class A
// {
//     private:
//     int a=10;
//     friend void show(A b);
// };
// void show(A b)
// {
//     cout<<b.a;
// }
// int main()
// {
//     A c;
//     show(c);
//     return 0;
// }
class ram
{
    private:
    int a=14;
    friend void show(ram r);
};
void show(ram r)
{
    cout<<r.a;
}
int main()
{
    ram r;
    show(r);
    return 0;
}