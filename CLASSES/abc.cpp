#include<iostream>
using namespace std;
class student
{
     public: 
      string name;
      int roll_no;
      int marks;
        
    void input()
    { 
        
      cout<<"enter your name:";
      cin>>name;
      cout<<"enter your roll no:";
      cin>>roll_no;
      cout<<"enter your marks:";
      cin>>marks;
    }
    void display()
        {
           
           cout<<"name:"<<name<<endl;
           cout<<"roll no:"<<roll_no<<endl;
           cout<<"marks:"<<marks;
        }
        
};
int main()
{
    student s;
    s.input();
    s.display();
    return 0;

}