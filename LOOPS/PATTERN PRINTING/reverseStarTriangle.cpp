/*print the pattern
n=4
   *
  **
 ***
****     
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of triangle : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=n;j>=1;j--)
        {
            if(i>=j)
            {
                cout<<"*";
            }
             else
             {
                 cout<<" ";
            }
        }
        cout<<endl;
    }
}