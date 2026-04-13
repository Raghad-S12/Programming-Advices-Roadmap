#include<iostream>
using namespace std;

int main(){
    float Mark1;
    float Mark2;
    float Mark3;
    

    cout<<"Enter First Mark : "<<endl;
    cin>>Mark1;
    cout<<"Enter Second Mark : "<<endl;
    cin>>Mark2;
    cout<<"Enter Third Number : "<<endl;
    cin>>Mark3;

    float Average = (Mark1+Mark2+Mark3)/3;
    cout<<"The Average of "<< Mark1 << " & "<< Mark2 << " & "<< Mark3 << " = "<<Average<<endl;
    return 0 ;

}