/*Write a program to replace the value of diagonal elements of a 
square matrix of order n x n by zero.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of matrix : ";
    cin>>n;
    int matrix[n][n];
    cout<<"enter the element of matrix : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"without updeted diagonal element : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                matrix[i][j]=0;
            }
        }
    }
    cout<<"updated  matrix with diagonal element zero : \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}