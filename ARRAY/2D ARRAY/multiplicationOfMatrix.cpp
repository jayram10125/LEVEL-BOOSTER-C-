//multiplication of two matrices
#include<iostream>
using namespace std;
int main()
{
    cout<<"\n!!number of column of first matrix must be equal to the number of row of second matrix!!\n\n";
    int r1,c1,r2,c2;
    cout<<"enter number of row of first matrix : ";
    cin>>r1;
    cout<<"enter number of column first matrix : ";
    cin>>c1;
    cout<<"enter number of row of second matrix (same as column of first matrix) : ";
    cin>>r2;
    cout<<"enter number of column second matrix : ";
    cin>>c2;
    int matrix1[r1][c1];
    int matrix2[r2][c2];
    int result[r1][c2];
    if(c1=r2)
    {
        cout<<"enter the "<<r1<<" row "<<c1<<" column of first matrix :\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>matrix1[i][j];
            }
        }
        cout<<"enter the "<<r2<<" row "<<c2<<" column of second matrix :\n";
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cin>>matrix2[i][j];
            }
        }
        //initializing all the elements of resultant matrix with zero
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
                    result[i][j]=result[i][j]+(matrix1[i][k] * matrix2[k][j]);
                }
            }
        }

        //printing matxix 1
        cout<<" first matrix is :\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<matrix1[i][j]<<" ";
            }
            cout<<endl;
        }
        //printing second matrix
        cout<<" second matrix is :\n";
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<matrix2[i][j]<<" ";
            }
            cout<<endl;
        }
        //printing resultant matrix 
        cout<<" resultant matrix is :\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }

    
    }
    else
    {
         cout<<"!!number of column of first matrix must be equal to the number of row of second matrix!!";
    }
    return 0;

}