//find the second smallest element in the array
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={4,3,5,8,1,2,6,7,9,0};
    int min,secondmin,p;
    min=INT_MAX;
    for(int i=0;i<10;i++)
    {
        if(min<arr[i])
        {
            min=arr[i];
            p=i;
        }
    }
    
    arr[p]=INT_MAX;
    secondmin=INT_MAX;
    for(int i=0;i<10;i++)
    {
        if(secondmin<arr[i])
        {
            secondmin=arr[i];
        }
    }
    cout<<"second smallest element is : " <<secondmin; 
    return 0;
}