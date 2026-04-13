#include <iostream>
using namespace std;

int main(){
    float Num1;
    float Num2;

    cout<<"Enter First Number : "<<endl;
    cin>>Num1;
    cout<<"Enter Second Number : "<<endl;
    cin>>Num2;
    cout<<"Output Before : "<<endl;
    cout<<Num1<<endl<<Num2<<endl;
    cout<<"Output After : "<<endl;

    float temp = Num1;
    Num1=Num2;
    Num2=temp;
    cout<<Num1<<endl<<Num2<<endl;
    return 0 ;
}