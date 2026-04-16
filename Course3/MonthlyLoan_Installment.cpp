#include<iostream> 
using namespace std; 

int main(){
    int Months;
    float Loan , MonthlyPayment;

    cout<<"Enter Loan Amount :"<<endl;
    cin>>Loan;
    cout<<"Enter Number of Months : "<<endl;
    cin>>Months;
    MonthlyPayment=Loan/Months; 
    cout<<"Monthly Payment = "<<MonthlyPayment<<endl;
    return 0; 
}