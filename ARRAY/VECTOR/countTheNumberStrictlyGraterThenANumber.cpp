//count the value of element strictly grater than value x
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x,count=0;
    vector<int> v(6);
    cout<<"enter the "<<v.size()<<" elements of array : \n";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    cout<<"enter x : ";
    cin>>x;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>x)
        {
            count++;
        }
    }
    cout<<"total number that is strictly grater than "<<x<<" is : "<<count;
    return 0;
}