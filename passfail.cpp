#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks\n";
    cin>>marks;

    if(marks>=90){
        cout<<"grade: O\n";
    }
    else if (marks>=80)
    {
        cout<<"grade: A\n";
    }
    else if (marks>=70)
    {
        cout<<"grade: B\n";
    }
    else if (marks>=60)
    {
        cout<<"grade: C\n";
    }
    else if (marks>=50)
    {
        cout<<"grade: D\n";
    }
    else{
        cout<<"grade: F\n";
    }
    
    return 0;
}