#include<iostream>
using namespace std;

int main(){

    const float PI = 3.14;
    float Circumference ;

    cout<<"Enter Circumference : "<<endl;
    cin>>Circumference;

    float Area = (Circumference*Circumference)/(4*PI);
    cout<<"The Area Of The Circule = "<< Area <<endl;

    return 0;

}