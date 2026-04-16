#include<iostream>
using namespace std;

int main(){
    unsigned int Days ;
    unsigned int Hours ;
    unsigned int Minutes ;
    unsigned int Seconds ;
    unsigned int TotalSeconde ;
    
    cout<<"Enter Dayes : "<<endl;
    cin>>Days;
    Days = Days*24*60*60;
    cout<<"Enter Hours : "<<endl;
    cin>>Hours;
    Hours = Hours*60*60;
    cout<<"Enter Minutes : "<<endl;
    cin>>Minutes;
    Minutes = Minutes*60;
    cout<<"Enter Seconds : "<<endl;
    cin>>Seconds;

    TotalSeconde = Days + Hours + Minutes + Seconds ;
    cout<<"Seconds = "<<TotalSeconde<<endl;

    return 0;
    
}