#include <iostream>
using namespace std;

int main(){
    float P, R, T, simple_interest;

    cout<<"Enter the value of Principal amount"<<endl;
    cin>>P;

    cout<<"Enter the rate of amount"<<endl;
    cin>>R;

    cout<<"Enter the time (in years)"<<endl;
    cin>>T;

    simple_interest= (P*R*T)/100;

    cout<<"The Simple Interest is: "<<simple_interest<<endl;
    
    return 0;
}