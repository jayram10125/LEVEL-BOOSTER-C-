//write the data in file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50];
    fstream fout("hello",ios::app);
    cout<<"enter a name : ";
    cin>>name;
    fout<<name;
    fout.close();
    cout<<"file created";
    return 0;
}
