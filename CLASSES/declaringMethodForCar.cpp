#include<iostream>
using namespace std;
class Car
{
    char CarName[50];
    int car_number;
    public:
    void carData();
    void displayData();
};
void Car::carData()
{
cout<<"enter car name : "<<endl;
cin>>CarName;
cout<<"enter car number : "<<endl;
cin>>car_number;
}
void Car::displayData()
{
    cout<<"car name is : "<<CarName<<endl;
    cout<<"car number is : "<<car_number<<endl;
}
int main()
{
    Car c1,c2;
    c1.carData();
    c2.carData();
    c1.displayData();
    c2.displayData();
    
}