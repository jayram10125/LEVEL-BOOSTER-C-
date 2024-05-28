/*Write a program to multiply two matrices A and B of order m x n.*/
#include<iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2;
    cout<<"enter row of first matrix : ";
    cin>>r1;
    cout<<"enter column of second matrix : ";
    cin>>c1;
    cout<<"enter row of second matrix(should be same as column of first matrix) : ";
    cin>>r2;
    cout<<"enter column of second matrix : ";
    cin>>c2;
    int matrix1[r1][c1];
    int matrix2[r2][c2];
    int result[r1][c2];
    cout<<"enter the elements of first matrix : \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>matrix1[i][j];
        }
    }
    cout<<"enter the elements of second matrix : \n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>matrix2[i][j];
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            result[i][j]=0;
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                result[i][j]=result[i][j]+(matrix1[i][k]*matrix2[k][j]);
            }
        }
    }
    cout<<"matrix 1 :\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matrix 2 :\n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"resultant matrix :\n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}
