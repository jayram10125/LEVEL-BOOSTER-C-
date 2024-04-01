//copy the contents of one array into another in the reverse array
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,5,3,4,9,6,2,8,7,0};
    int brr[10];
    for(int i=0;i<10;i++)
    {
        brr[i]=arr[i];
    }
    cout<<"elements of another array : ";
     for(int i=9;i>=0;i--)
    {
        cout <<brr[i]<<" "; 
    }
    
    return 0;
}