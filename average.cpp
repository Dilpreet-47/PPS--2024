#include <iostream>
using namespace std;

int main(){
    float num1, num2, num3, average;

    cout<<"Enter the value of num1"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2"<<endl;
    cin>>num2;
    cout<<"Enter the value of num3"<<endl;
    cin>>num3;

    average=(num1+num2+num3)/3;

    cout<<"The average of numbers is: "<<average<<endl;

    return 0;
}