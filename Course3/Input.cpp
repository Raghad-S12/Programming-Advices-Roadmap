#include <iostream>
using namespace std;
int main(){

    string Name;
    int Age;
    string City;
    string country;
    float MonthlySalary;
    char Gender;
    bool IsMarried;
    cout<<"Enter your Name : "<< endl;
    cin>>Name;
    cout<<"Enter your Age : "<< endl;
    cin>>Age;
    cout<<"Enter your City :"<< endl;
    cin>>City;
    cout<<"Enter your Country : "<< endl;
    cin>>country;
    cout<<"Enter your Monthly Salary : "<< endl;
    cin>>MonthlySalary;
    cout<<"Enter your Gender : "<< endl;
    cin>>Gender;
    cout<<"Are you Married? if yes enter true otherwise enter false"<<endl;
    cin>>IsMarried;

    cout<<"***********************************"<<endl;
    cout<<"Name: "<<Name<<endl;
    cout<<"Age: "<<Age<<endl;
    cout<<"City: "<<City<<endl;
    cout<<"Country: "<<country<<endl;
    cout<<"Monthly Salary: "<<MonthlySalary<<endl;
    cout<<"Yearly Salary: "<<MonthlySalary*12<<endl;
    cout<<"Gender: "<<Gender<<endl;
    cout<<boolalpha;
    cout<<"Married: "<<IsMarried<<endl;
    cout<<"************************************"<<endl;
    return 0;


}