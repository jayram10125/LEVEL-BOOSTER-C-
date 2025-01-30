// input 6  outtput =1+2+3(consecutive sum if any)
// input 7 output =-1(consutive sum is not available)
#include<iostream>
using namespace std;
int check(int n)
{
    for(int i=1;i<=n/2;i++)
        {
            if(i+(i+1)+(i+2)==n)
            {
                
                return i;
                break;
            }
        }
        return -1;
}
int main()
{
    int n;
    cout<<"enter number of test cases  : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int input;
        cout<<"enter an input value : ";
        cin>>input;
        int m=check(input);
        if(m!=-1)
        {
            cout<<m<<"+"<<(m+1)<<"+"<<(m+2)<<endl;
        }
        if(m==-1)
        {
            cout<<m<<endl;
        }
        
        
    }



    return 0;
}