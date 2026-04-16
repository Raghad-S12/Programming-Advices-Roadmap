#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float LoanAmount , MonthlyPayment;
    cout<<"Enter Loan Amount : "<<endl;
    cin>>LoanAmount;
    cout<<"Enter Monthly Payment : "<<endl;
    cin>>MonthlyPayment;
    int TotalMonths = ceil(LoanAmount/MonthlyPayment);
    cout<<"Total Months = "<<TotalMonths<<endl;
    return 0;
}