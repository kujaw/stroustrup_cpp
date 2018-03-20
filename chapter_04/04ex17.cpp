// Find the mode of given string sequence

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, string> findMode(vector<string> vx)
{

    int mode_occurence = 0;
    int occurence = 0;
    string prev_x, x, mode;

    for (size_t i = 0; i < vx.size(); ++i)
    {
        x = vx[i];

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
    vector<string> vWords;
    string input;

    cout << "Hello. I will find mode of words that you provide me with." << '\n';

    while(true)
    {
        cout << "Enter a word or \"q\" to quit" << '\n';
        cin >> input;

        if (input == "q")
        {
            break;
        }

        vWords.push_back(input);
        cout << "Added word." << '\n';
    }

    sort(vWords.begin(), vWords.end());

    auto [mode_occurence, mode] = findMode(vWords);

    if (mode_occurence < 1)
    {
        cout << "Your list of numbers is empty, no mode found." << '\n';
    }
    else 
    {
        cout << "Mode: " << mode << ", occurence: " << mode_occurence << '\n';
        cout << "Min: " << vWords[0] << ", max: " << vWords.back() << endl;
    }


    return 0;
}
