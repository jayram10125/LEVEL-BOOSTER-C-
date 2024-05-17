#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fileout("d://FILE HANDLING/name.txt",ios::app);
    fileout<<"jay ram kumar";
    fileout<<"\nraja ram";
    fileout.close();
    cout<<"file created";
    return 0;
}