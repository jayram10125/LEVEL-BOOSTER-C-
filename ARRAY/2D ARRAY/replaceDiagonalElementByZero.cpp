//WAP to replace the diagonal element of  an array by zero
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
    cout<<"the old elements of array :\n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j)
            {
            arr[i][j]=0;
            }
        }
        
    }
    cout<<"new matxix is \n";
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
           
            cout<<arr[i][j] <<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
  