//star rectangle
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"enter row : ";
    cin>>r;
    cout<<"enter column : ";
    cin>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}