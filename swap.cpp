#include <iostream>
using namespace std;
int main(){
    float a, b;

    cout<<"Enter first number\n";
    cin>>a;
    cout<<"Enter second number\n";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"swapped value of a is: "<<a<<endl<<"swapped value of b is "<<b<<endl;

    return 0;

}