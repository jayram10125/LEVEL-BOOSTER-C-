//WAP to print the upper triangular matrix
#include<iostream>
using namespace std;
int  main()
{
    int size;
    cout<<"enter the size of square matrix : ";
    cin>>size;
    int arr[size][size];
    cout<<"enter the "<<size*size<<" elements of array : \n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"the elements of array :\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the upperr triangular matrix  is :\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(j>=i)
            {
            cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

}