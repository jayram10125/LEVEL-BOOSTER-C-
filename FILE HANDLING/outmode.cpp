//write some data
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fout("d://File Handling Class/name.txt",ios::out);
    fout<<"ram";
    
    fout.close();
    cout<<"file is created";
 return 0;
}