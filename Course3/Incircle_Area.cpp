#include<iostream>
using namespace std;

int main(){

    float LegLength;
    float BaseLength;
    const float PI = 3.14;

    cout<<"Enter Leg Length : "<<endl;
    cin>>LegLength;
    cout<<"Enter Base Length : "<<endl;
    cin>>BaseLength;
    
    float Area = (PI*((BaseLength*BaseLength)/4))*((2*LegLength-BaseLength)/(2*LegLength+BaseLength));
    cout<<" The A rea Of Incirclr = "<<Area<<endl;
    return 0;
}