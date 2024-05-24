//shutting down the system
#include<iostream>
#define shutdown() system("shutdown /s /t 1");
#define pause() system("pause");
using namespace std;
int main()
{
    cout<<"to shutdown ";
    pause();
    shutdown();
    return 0;
}