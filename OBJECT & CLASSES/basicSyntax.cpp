#include<iostream>
using namespace std;
class student
{
    private :
    int abc=54;//it is not accessiable oulside the class
  public :
    int roll_no;
    
    
};
int main()
{
    student s1;
    s1.roll_no=1323409;
    cout<<s1.roll_no; // 1323409
   
    
    return 0;
}