//findimg transpose of a matrix
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter number of rows : ";
    cin>>m;
    cout<<"enter number of columns  : ";
    cin>>n;
    int arr[m][n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"orignal matrix is : \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int transpose[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            transpose[i][j]=arr[j][i];
        }
    }
    cout<<"transpose matrix is : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
