#include<iostream>
using namespace std;

int main(){
    double TotalBill;
    double CashPaid;

    cout<<"Enter Total Bill :"<<endl;
    cin>>TotalBill;
    cout<<"Enter Cash Paid :"<<endl;
    cin>>CashPaid;

    double Remainder = CashPaid-TotalBill;
    cout<<"your Remainder = "<<Remainder<<endl;

    return 0;
}