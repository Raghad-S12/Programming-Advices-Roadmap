#include<iostream>
using namespace std ;

int main(){

    float BillValue;
    cout<<"Enter Bill Value : "<<endl;
    cin>>BillValue;

    float ServiceFee = (0.10)*BillValue;
    float BillBeforeTax = ServiceFee + BillValue;
    float BillAfterTax = (0.16*BillBeforeTax)+BillBeforeTax;
    
    cout<<"Your Bill = "<<BillAfterTax<<endl;
    return 0;

}