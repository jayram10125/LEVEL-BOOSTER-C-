/*find the difference between the sum of elements at even indices to the sum of elements at odd indices*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,5,9,12,18,36,20,16};
    int sumodd=0 , sumeven=0;
    for(int i=0;i<8;i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+arr[i];
        }
        else
        {
            sumodd=sumodd+arr[i];
        }
    }
    cout<<"the difference is : "<<sumeven-sumodd;
    
    return 0;
}