#include <iostream>
#include <vector>

using namespace std;

vector<string> vNumbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", 
                           "eight", "nine", "ten"};
int getNumber()
{
    int max_num = vNumbers.size();
    int num;
    string s;

    if (cin >> num)
    {
        return num;
    }
    cin.clear();
    cin >> s;

    for (int i = 0; i < vNumbers.size(); ++i)
    {
        if (s == vNumbers[i])
        {
            num = i;
            return num; 
        }
        else
        {
            // assign value > 10, this makes sure the value will not pass
            num = 11;
        }
    }
}


int main()
{

    int num1, num2;
    char op;

    cout << "Enter two integer numbers in range 0-10 and a character (e.g. 2 + 3, 2 + "
            "three, two + 3)\n";

    num1 = getNumber();
    cin >> op;
    num2 = getNumber();
    
    while (num1 > vNumbers.size()-1 || num1 < 0 || num2 > vNumbers.size()-1 || num2 < 0)
    {
        cout << "Invalid input, please use numbers from 0 to 10\n";
        num1 = getNumber();
        cin >> op;
        num2 = getNumber();
    }

    switch(op)
    {
        case '+':
            cout << num1 << " " << op << " " << num2 << " = " << num1+num2 << endl;
            break;
        case '-':
            cout << num1 << " " << op << " " << num2 << " = " << num1-num2 << endl;
            break;
        case '*':
            cout << num1 << " " << op << " " << num2 << " = " << num1*num2 << endl;
            break;
        case '/':
            cout << num1 << " " << op << " " << num2 << " = " << num1/num2 << endl;
            break;
        default:
            cout << "Invalid input, please try again." << endl;
    }

    return 0;
}
