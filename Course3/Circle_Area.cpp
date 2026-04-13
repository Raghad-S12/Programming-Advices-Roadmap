#include<iostream>
using namespace std;

int main(){
    float Diameter;
    const float PI = 3.14;

    cout<<"Enter Diameter"<<endl;
    cin>>Diameter;

    float Area = (PI*(Diameter*Diameter))/4;

    cout<<"The circle Area = "<< Area << endl;
    return 0 ;
}