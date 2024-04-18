//WAP to print the lower triangular matrix
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
    cout<<"the lower triangular matrix are :\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i>=j)
            {
            cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

}