//take 5 input and print it in reverse order
#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"enter the 5 elements of array : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"the reverse elements of array are  :"<<endl;
    for(int i=4;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
}