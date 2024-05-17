#include<iostream>
#include<fstream>
using namespace std;
int main()
{   char name[50];
    fstream fin("d://File Handling Class/name.txt",ios::in);
    fin>>name;
    cout<<name;
 return 0;
}