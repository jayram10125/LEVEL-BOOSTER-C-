//convert decimal to hexadecimal
#include<iostream>
using namespace std;
int main()
{
    int n,r,p,arr[32],i=0;
    cout<<"enter a decimal number : ";
    cin>>n;
    p=n;
    while(n!=0)
    {
        r=n%16;
        arr[i]=r;
        i++;
        n=n/16;
    }
    i--;

    cout<<"haxadecimal of "<<p<<" is : ";
    while(i>=0)
    {
        switch(arr[i])
            {
                case 10:cout<<"A";break;
                case 11:cout<<"B";break;
                case 12:cout<<"C";break;
                case 13:cout<<"D";break;
                case 14:cout<<"E";break;
                case 15:cout<<"F";break;
                default:cout<<arr[i];break;

            }
        i--;
    }
    return 0;
}