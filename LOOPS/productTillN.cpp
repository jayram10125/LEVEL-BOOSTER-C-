//product till n numbers
#include<iostream>
using namespace std;
int main()
{
    int n,prdt=1;
    cout<<"enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        prdt=prdt*i;
    }
    cout<<"sum till "<<n<<" is : "<<prdt;

}