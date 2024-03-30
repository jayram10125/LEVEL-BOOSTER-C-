/*Given an array of marks of students, if the
mark of any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]*/
#include<iostream>
using namespace std;
int main()
{
    int marks[10]={56,65,34,73,42,24,89,30,68,90};
    cout<<"roll no : ";
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
        cout<<i+1<<" ";
    }
}