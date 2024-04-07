#include<iostream>
using namespace std;
class student
{
    
    int abc=54;//it is not accessiable oulside the class
  public :
    int roll_no;
    
    
};
int main()
{
    student s1,s2,s3;
    s1.roll_no=1323409;
    s2.roll_no;//=1323441;
    s3.roll_no=1323442;
    cout<<s1.roll_no<<endl; // 1323409
   //cout<< s1.abc   //---> can't access bcz  abc dedfined in private
   cout<<s2.roll_no<<endl;
   cout<<s3.roll_no<<endl; 
    
    return 0;
}