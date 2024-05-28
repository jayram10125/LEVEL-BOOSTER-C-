/*Write a program to implement the following functions in an array. i) 
Insertion of an element. ii) Deletion of an element.*/
#include<iostream>
using namespace std;
void insertion(int arr[],int index,int element)
{ 
    for(int i=5;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return ;
}
void deletion(int arr[],int index)
{
    for(int i=index;i<6;i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int main()
{
    int index,element;
    int arr[10]={1,5,6,8,9,3};
    cout<<"initially array is : ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter the index where you want to insert the data : ";
    cin>>index;
    cout<<"enter the element that you want to insert : ";
    cin>>element;
    insertion( arr,index,element);
    cout<<"after insertion array is : ";
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nenter the index that you want to delete : ";
    cin>>index;
    deletion(arr,index);
    cout<<"after deletion array is : ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}