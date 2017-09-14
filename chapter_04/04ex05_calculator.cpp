#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char sign;

    cout << "Enter two numbers and a character (e.g. 2 + 3, 2 * 3) \n";

    cin >> num1;
    cin >> sign;
    cin >> num2;

    switch(sign)
    {
        case '+':
            cout << num1 << " " << sign << " " << num2 << " = " << num1+num2 << endl;
            break;
        case '-':
            cout << num1 << " " << sign << " " << num2 << " = " << num1-num2 << endl;
            break;
        case '*':
            cout << num1 << " " << sign << " " << num2 << " = " << num1*num2 << endl;
            break;
        case '/':
            cout << num1 << " " << sign << " " << num2 << " = " << num1/num2 << endl;
            break;
        default:
            cout << "Invalid input, please try again." << endl;
    }

    return 0;
}
