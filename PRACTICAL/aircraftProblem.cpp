/*An aircraft system is designed which checks speeds and monitors various 
functions of the aircraft during the flight. Warnings and errors are 
generated if any fault develops during the flight. The system is coded in a 
manner that if 100 is entered as input it indicates “normal speed range”, if 
101 is entered it gives “over-speed warning” indicating that aircraft is over 
speeding. If 88 is entered, it indicates “Low Oil Pressure” and if 187 is 
entered it indicates “Engine Failure”. Use switch statement to implement 
this logic.*/

#include<iostream>
using namespace std;
int main()
{
    int speed;
    cout<<"enter speed of aircraft : ";
    cin>>speed;
    switch(speed)
    {
        case 100 : cout<<"normal input range!!";break;
        case 101 : cout<<"over-speed warning!!";break;
        case 88  : cout<<"low oil pressure!!";break;
        case 187 : cout<<"Engine failure!!";break;
        default  : cout<<"enter valid input!!";break;
    }
    return 0;
}