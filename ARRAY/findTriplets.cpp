// find total triplets whose sum is equal to given number x.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={4,3,5,8,1,2,6,7,9,0};
    int n,triplets=0;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"triplets are : "<<endl;
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            for(int k=j+1;k<10;k++)
            {
                if(arr[i]+arr[j]+arr[k]==n)
                {
                    triplets++;
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
            }
        }
    }
    cout<<"total triplets are : "<<triplets;
    return 0;
}