#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    char name[50];
    fstream fout("d://MMDU/writeTheDataByuser",ios::app);
    cout<<"enter any name";
    cin>>name;
    fout<<name;
    fout.close();
    cout<<"filr created";
    return 0;
}