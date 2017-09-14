#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> vString = {"zero", "one", "two", "three", "four", "five", "six", "seven", 
                              "eight", "nine"};
    string command;
    string spelledDigit;
    int digit;

    while(true)
    {
        cout << "Do you want to convert digit to it's spelled-out value or the opposite? Type 'ds' for"
                " the former or 'sd' for the latter. Type 'q' to quit. ";
        cin >> command;
        if(command == "ds")
        {
            cout << "Enter digit ('1', '2', etc.) you want to convert: ";
            cin >> digit;
            cout << vString[digit] << "\n\n";
        }
        else if (command == "sd")
        {
            cout << "Enter spelled-out digit ('one', 'two', etc.) you want to convert: ";
            cin >> spelledDigit;
            //auto it = find(vString.begin(), vString.end(), spelledDigit);
            //auto pos = distance(vString.begin(), it);
            for (int i = 0; i < vString.size()-1; ++i)
            {
                if (vString[i] == spelledDigit)
                {
                    cout << i << "\n\n";
                }
            }
        }
        else if (command == "q")
        {
            break;
        }
        else
        {
            cout << "Wrong input, please try again.\n\n";
        }
    }

    return 0;
}
