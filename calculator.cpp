#include <iostream>
using namespace std;

int main()
{
    char operation;
    double num1, num2, result;

    cout << "select the operation (+, -, *, /)\n";
    cin>>operation;

    cout << "Enter the first number: ";
    cin>>num1;

    cout << "Enter the first number: ";
    cin>>num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << result << " is the result of addition";
        break;
    case '-':
        result = num1 - num2;
        cout << result << " is the result of subtraction";
        break;

    case '*':
        result = num1 * num2;
        cout << result << " is the result of multiplication";
        break;

    case '/':

        if (num2 != 0)
        {
            result = num1 / num2;
            cout << result << " is the result of division";
        }
        else
        {
            cout << " zero is not divisible";
        }
        break;
    default:
        cout << " you entered invalid operator" ;
        break;
    }
    return 0;
}