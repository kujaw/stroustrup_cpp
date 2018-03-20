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
    int mode_occurrence = 1;
    int _count = 1;
    int mode = vx[0];
    
    for (size_t _prev = 0, _next = 1; _next < vx.size(); ++_prev, ++_next) 
    {
        if (vx[_prev] == vx[_next])
        {
            ++_count;
        }
        else
        {
            if (_count > mode_occurrence)
            {
                mode = vx[_prev];
                mode_occurrence = _count;
            }
            _count = 1;
        }
    }
    return make_pair(mode_occurrence, mode);
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

    sort(vnumbers.begin(), vnumbers.end());

    auto [mode_occurrence, mode] = findMode(vnumbers);

    if (mode_occurrence < 1)
    {
        cout << "Your list of numbers is empty, no mode found." << '\n';
    }
    else 
    {
        cout << "Mode: " << mode << ", occurence: " << mode_occurrence << endl;
        cout << "Min: " << vnumbers[0] << ", max: " << vnumbers.back() << endl;
    }

    return 0;
}
