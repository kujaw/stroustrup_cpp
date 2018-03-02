// Find the mode of given int sequence

#include <iostream>
#include <regex>
#include <vector>

using namespace std;

bool isNumber(string x)
{
    regex r("[1-9]+");
    if (regex_match (x,r))
    {
        return true;
    }
    else
    {
        return false;
    }
}

pair<int, int> findMode(vector<int> vx)
{
    sort(vx.begin(), vx.end());

    int mode_occurence = 0;
    int occurence = 0;
    int prev_x, x, mode;

    for (auto i = vx.begin(); i != vx.end(); ++i)
    {
        x = *i;

        if (prev_x != x)
        {
            occurence = 1;
        }
        else
        {
            ++occurence;
        }

        if (occurence > mode_occurence)
        {
            mode_occurence = occurence;
            mode = x;
        }
        prev_x = x;
    }
    return make_pair(mode_occurence, mode);
}

int main()
{
    vector<int> vnumbers;
    string input;
    int number;

    cout << "Hello. I will find mode of numbers that you provide me with." << '\n';

    while(true)
    {
        cout << "Enter a positive integer number or \"q\" to quit" << '\n';
        cin >> input;

        if (input == "q")
        {
            break;
        }

        else if(isNumber(input) == false)
        {
            cout << "Wrong number, please try again" << '\n';
            continue;
        }
        else
        {
            cout << "Yeah!" << '\n';
            number = stoi(input);
            vnumbers.push_back(number);
        }
    }

    auto [mode_occurence, mode] = findMode(vnumbers);

    cout << "Mode: " << mode << ", occurence: " << mode_occurence << endl;

    return 0;
}
