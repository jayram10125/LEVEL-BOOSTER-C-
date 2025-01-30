#include<iostream>
using namespace std;
int main()
{
    int atm_num;
    char ch;
    cout<<" !! LET'S PLAY PERIODIC TABLE GAME !!\n";
    cout<<"enter the atomic number of elements\n";
    cin>>atm_num;
    if(atm_num==1)
    {
        cout<<"this is : HYDROGEN\n";
        cout<<"symbol is : H \n";
        cout<<"atomic weight is : 2\n";
        cout<<"want to continue again for yes tap y and for no tap n \n";
        cin>>ch;
        if(ch=='y')
        {
            cout<<"enter another element number : ";
            cin>>atm_num;
            if(atm_num==2)
            {
                cout<<"this is : HELIUM\n";
                cout<<"symbol is : He\n";
                cout<<"atomic weight is : 4\n";
            }
            
        }
        else
        {
            cout<<"THANK YOU!!";
            exit;
        }

    }


    return 0;
}