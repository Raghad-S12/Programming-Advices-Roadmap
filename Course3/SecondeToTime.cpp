#include<iostream>
using namespace std;

int main(){

    unsigned int Days ,Hours ,Minutes ,Seconds;
    cout<<"Enter Seconds : ";
    cin>>Seconds;

    Minutes=Seconds/60;
    Seconds=Seconds%60;
    Hours=Minutes/60;
    Minutes=Minutes%60;
    Days=Hours/24;
    Hours=Hours%24;

    cout<<Seconds<<" = "<<endl;
    cout<<Days<<" Days, "<<Hours<<" Hours, "<<Minutes<<" Minutes, "<<Seconds<<" Seconds "<<endl;
    return 0;

}