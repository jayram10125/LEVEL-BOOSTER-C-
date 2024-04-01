//reverse the array without using another array
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,5,3,4,9,6,2,8,7,0};
   cout<<"elements of array in reverse order : ";
      for(int i=9;i>=0;i--)
    {
        cout <<arr[i]<<" "; 
    }
    
    return 0;
}