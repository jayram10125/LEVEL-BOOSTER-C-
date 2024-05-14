//read the data from file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   
    fstream fin("D://File Handling/student.txt",ios::in);
    char name[50];
    fin>>name;
    cout<<name;
    fin.close();
    //cout<<"file created";
    return 0;
}