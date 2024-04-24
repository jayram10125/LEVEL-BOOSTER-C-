//find the last occurence of an element x in a given array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x,occurence;
    vector<int> v(6);
    cout<<"enter the element : "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    cout<<"enter the x : ";
    cin>>x;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            occurence=i;
        }
    }
    cout<<"index of last occurence of "<<x<<" is : "<<occurence;
    return 0;
}