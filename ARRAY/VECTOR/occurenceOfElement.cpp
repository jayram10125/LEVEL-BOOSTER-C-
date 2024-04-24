//find the occurence of  an element x in given array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x,count=0;    
    vector<int> v(9);
    cout<<"enter the element : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        //int element;
        //cin>>element;
        cin>>v[i];
    }
    cout<<"enter the number for that you want to find occurence : ";
    cin>>x;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            count ++;
        }
    }
    cout<<"occurence of "<<x<<" is : "<<count;
    return 0;
}