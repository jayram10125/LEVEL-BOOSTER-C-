//printing the table of N
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number for which you want to print the table : ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}