#include<iostream>
using namespace std;

int main(){

    double Num1;
    double Num2;

    cout<<"Enter the first number : ";
    cin>>Num1;
    cout<<"Enter the second number : ";
    cin>>Num2;
    
    cout<<boolalpha;
    cout<<Num1<<" = "<<Num2<<" is "<<(Num1==Num2)<<endl;
    cout<<Num1<<" != "<<Num2<<" is "<<(Num1!=Num2)<<endl;
    cout<<Num1<<" > "<<Num2<<" is "<<(Num1>Num2)<<endl;
    cout<<Num1<<" < "<<Num2<<" is "<<(Num1<Num2)<<endl;
    cout<<Num1<<" >= "<<Num2<<" is "<<(Num1>=Num2)<<endl;
    cout<<Num1<<" <= "<<Num2<<" is "<<(Num1<=Num2)<<endl;

    return 0;
}
