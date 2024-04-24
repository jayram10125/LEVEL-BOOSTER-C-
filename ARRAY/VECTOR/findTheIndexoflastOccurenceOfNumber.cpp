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
    //traversing from start
    // for(int i=0;i<v.size();i++)
    // {
    //     if(v[i]==x)
    //     {
    //         occurence=i;
    //     }
    // }

    //we can traverse from last also
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]==x)
        {
            occurence=i;
            break;
        }
    }
    cout<<"index of last occurence of "<<x<<" is : "<<occurence;
    return 0;
}