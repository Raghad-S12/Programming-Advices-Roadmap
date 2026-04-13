#include<iostream>
using namespace std;

int main(){

    float Pennies ,Nickels ,Dimes ,Quarters ,Dollar  ;
    

    cout<<"Enter Pennies : "<<endl;
    cin>>Pennies;
    cout<<"Enter Nickels : "<<endl;
    cin>>Nickels;
    cout<<"Enter Dimes : "<<endl;
    cin>>Dimes;
    cout<<"Enter Quarters : "<<endl;
    cin>>Quarters;
    cout<<"Enter Dollar : "<<endl;
    cin>>Dollar;

    float TotalPennies =(Pennies)+(Nickels*5)+(Dimes*10)+(Quarters*25)+(Dollar*100);
    float TotalDollar =TotalPennies/100;

    cout<<"Pennies = "<<TotalPennies<<endl;
    cout<<"Dollar = "<<TotalDollar<<endl;

    return 0;

}