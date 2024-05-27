/*An electricity board charges the following rates to domestic users to 
discourage large consumption of energy:
For first 100 units Rs. 1 per unit
For next 200 units Rs. 2 per unit
Beyond 300 units Rs. 4 per unit
All users charged a minimum of Rs. 500.00. if total amount is more than 
Rs. 5000 then additional surcharge of 15% is added.
Write a program to read the names of users and number of units consumed 
and print the names with the total charges.*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,unit;
    float charges=0;
    string name;
    cout<<"enter number of users for what you want to calculate e-bill : ";
    cin>>n;
    for(int i=1 ;i<=n ;i++)
    {
        cout<<"enter name of the user" <<i <<" : ";
        cin>>name;
        cout<<"enter number of electricity unit : ";
        cin>>unit;
        if(unit>0 && unit<=100)
        {
            charges=charges+(unit-100);
        }
        else if(unit>100 && unit <=300)
        {
            charges=(100*1)+((unit-100)*2);
        }
        else
        {
            charges=(100*1)+(200*2)+((unit-300)*4);
        }

        if(charges<=500)
        {
            charges=500;
        }
        if(charges>5000)
        {
            charges=charges+((charges*15)/100);
        }
         cout<<"total charges for "<<name<<" is : "<<charges<<"Rs.\n";

    }
    return 0;
}