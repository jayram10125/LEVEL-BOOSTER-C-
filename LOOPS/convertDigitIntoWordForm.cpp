//convert digit into words
#include<iostream>
using namespace std;
int main()
{ int n,r,reverse=0;
cout<<"enter a number : ";
cin>>n;
while(n!=0)
{
    r=n%10;
    reverse=reverse*10+r;
    n=n/10;
}

while(reverse!=0)
{
    r=reverse%10;
    switch(r)
    {
        case 0:cout<<" zero ";break;
        case 1:cout<<" one ";break;
        case 2:cout<<" two ";break;
        case 3:cout<<" three ";break;
        case 4:cout<<" four ";break;
        case 5:cout<<" five ";break;
        case 6:cout<<" six ";break;
        case 7:cout<<" seven ";break;
        case 8:cout<<" eight ";break;
        case 9:cout<<" nine ";break;
        default:break;


    }
    reverse=reverse/10;
}

    
    return 0;
}