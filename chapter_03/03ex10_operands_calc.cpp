#include <iostream>

using namespace std;

int main()
{
    string operation;
    double operand1, operand2, result;

    cout<<"Enter operation ('+', '-', '*', '/' and two operands, I will then calculate them "
          "properly:"<<endl;

    cin>>operation>>operand1>>operand2;

    if(operation=="+" || operation=="plus")
    {
        result = operand1 + operand2;
    }
    else if(operation=="-" || operation=="minus")
    {
        result = operand1 - operand2;
    }
    else if(operation=="*" || operation=="mul")
    {
        result = operand1 * operand2;
    }
    else if(operation=="/" || operation=="div")
    {
        result = operand1 / operand2;
    }
    
    cout<<"Result is "<<result<<endl;

    return 1;
}

