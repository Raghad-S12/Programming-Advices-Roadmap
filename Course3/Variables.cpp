#include <iostream>
using namespace std;

int main(){

    int x=5;
    int y=10;
    int sum = x+y;
    cout<<" sum of 5+10="<<sum<<"\n";

    cout<<"is the following valid variable ?\n";
    cout<<"Age? yes \nMy-Age? No \n_Age? yes \n2x? No \nx2? yes \nMy Name? No \nMyName? yes \n#Name? No \n$Name? No \nN@me? No \nint? No \nfloat? No\n";
    string Name = "Mohammed Abu-Hadhoud";
    int Age = 44;
    string City = "Amman";
    string Country = "Jordan";
    float MonthlySalary = 5000;
    char Gender = 'M';
    bool married = true ;
    
    cout<<"**********************************"<<"\n";
    cout<<"Name: "<< Name<< endl;
    cout<<"Age: "<< Age << endl;
    cout<<"City: "<< City << endl;
    cout<<"Country: "<< Country << endl;
    cout<<"Monthly Salary: "<< MonthlySalary << endl;
    cout<<"Yearly Salary: "<< MonthlySalary*12 << endl;
    cout<<"Gender: "<< Gender << endl;
    cout<< boolalpha;
    cout<<"Married: "<< married << endl;
    cout<<"**********************************"<<"\n";

    cout<<"20+\n"<<"30+\n"<<"10+\n";
    cout<<"******************"<<endl;
    cout<<"Total= "<< 20+30+10 <<endl ;

    return 0;
}