/* Write a program to print the following pattern:
     *
    * *
   * * *
  * * * *
 * * * * *
 
 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of star pyramid : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            if (i>=j)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}