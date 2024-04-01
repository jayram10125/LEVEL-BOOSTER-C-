//find the second largest element in the array
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={4,3,5,8,1,2,6,7,9,0};
    int max,secondmax,p;
    max=INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            p=i;
        }
    }
    cout<<max<<endl;
    arr[p]=INT_MIN;
    secondmax=INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(secondmax<arr[i])
        {
            secondmax=arr[i];
        }
    }
    cout<<secondmax; 
    return 0;
}