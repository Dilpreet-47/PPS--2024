#include <iostream>
using namespace std;
int main(){

    float fahrenheit, celsius;

    cout<<"Enter the temperature in fahrenheit"<<endl;
    cin>>fahrenheit;

    celsius= (fahrenheit-32)/1.8;
    cout<<"Temperature in celsius is: "<<celsius<<endl;
    return 0;

}