//given an array check it is sorted or not 
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int f=0;
    for(int i=1;i<6;i++)
    {
        if(arr[i]>arr[i-1])
        {
            f++;
        }
    }
    if (f==5)
    cout<<"sorted";
    else
    cout<<"not sorted";
    return 0;
}