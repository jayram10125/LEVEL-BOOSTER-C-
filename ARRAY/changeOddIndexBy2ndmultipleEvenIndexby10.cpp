/* given an array of integers,change the value of all odd indexed elements to its second multiple and increment all even number indeed value by 10.*/
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={4,5,3,8,6,5,12,7};
    for(int i=0;i<8;i++)
    {
        if(i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else
        {
            arr[i]=arr[i]*2;
        }
    }
    cout<<"changes elements are : ";
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}