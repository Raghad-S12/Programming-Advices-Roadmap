#include<iostream>
using namespace std;

int main(){

    float Num1;
    float Num2;
    float Num3;

    cout<<"Enter First Number : "<<endl;
    cin>>Num1;
    cout<<"Enter Second Number : "<<endl;
    cin>>Num2;
    cout<<"Enter Third Number : "<<endl;
    cin>>Num3;
    cout<<" Sum of : "<< Num1 <<" + "<< Num2 << " + "<< Num3 << " = ";
    float Sum = Num1+Num2+Num3;
    cout<<Sum<<endl;
    return 0 ;
}