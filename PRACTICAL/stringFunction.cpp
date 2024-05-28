/*Write a program to show the use of string manipulation functions : strcpy(), 
strlen(), strcat(), strrev(), Strlwr().*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[]="JAY";
    char str2[]="ram";
    char str3[20];
    strcpy(str3,str1);
    cout<<"copied string : "<<str3<<endl;
    cout<< "length of str1 : " <<strlen(str1)<<endl;
    cout<<"concate str1 & str2 : "<<strcat(str1,str2)<<endl;
    cout<<"reverse of str2 : "<<strrev(str2)<<endl;
    cout<<"convert str1 into lower case : "<<strlwr(str1)<<endl;
    cout<<"convert str2 into upper case : "<<strupr(str2)<<endl;
    return 0;
}