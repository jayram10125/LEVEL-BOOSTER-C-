#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    //char name[50];
    string str;
    fstream fin("d://FILE HANDLING/name.txt",ios::in);
   // fin>>name;
   getline(fin,str);
    cout<<str;
    return 0;
}