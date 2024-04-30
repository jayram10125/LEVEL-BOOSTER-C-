//find the difference between the sum of even indices and odd indices
#include<iostream>
using namespace std;
int main()
{
    int arr[8]={4,5,9,3,5,7,6,3};
    int sumodd=0,sumeven=0;
    for(int i=0;i<8;i++)
    {
        if(i%2==0)
        sumeven=sumeven+arr[i];
        else
        sumodd=sumodd+arr[i];
    }
    cout<<"difference is : "<<sumeven-sumodd;
}