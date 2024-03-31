//product of all the elements
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"enter 10 elements of array : "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<10;i++)
    {
        product=product*arr[i];
    }
    cout<<"sum of elements is : "<<product;
    return 0;
}