#include<iostream>
using namespace std;
class StudentData
{
    int roll_no;
    char name[50];
    int mob_no;
    public :
    void getData();
    void display();
};
void StudentData :: getData()
{
    cout<<"enter roll no. : "<<endl;
    cin>>roll_no;
    cout<<"enter name : "<<endl;
    cin>>name;
    cout<<"enter mobile no. : "<<endl;
    cin>>mob_no;
}
void StudentData :: display()
{
    cout<<"\nroll no. : "<<roll_no;
    cout<<"\nname : "<<name;
    cout<<"\nmobile number : "<<mob_no;
}

int main()
{
StudentData s1,s2,s3;
s1.getData();
s2.getData();
s3.getData();
s1.display();
s2.display();
s3.display();

}