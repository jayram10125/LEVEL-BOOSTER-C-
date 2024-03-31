#include<iostream>
using namespace std;
int main()
{
    int arr[26],temp;
    arr[0]=100;
    arr[25]=200;
    temp=arr[25]; //temp=200
    arr[25]=arr[0];//arr[25]=100
    arr[0]=temp;//arr[0]=200
    cout<<arr[0]<<endl<<arr[25];//200,100
    
    return 0;
}