//write the data in file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50];
    fstream fin("D://File Handling/city.txt",ios::in);
    cout<<"enter a city name : ";
    fin>>name;
    cout<<name;
    fin.close();
    cout<<"file created";
    return 0;
}
