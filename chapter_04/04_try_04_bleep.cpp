// "bleep" out unwanted words 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> dislikes = {"Yes", "No", "Maybe", "Asdf", "Qwer"};
    vector<string> words;

    for (string temp; cin >> temp;)
    {
        words.push_back(temp);
    }
    cout << '\n';

    for  (int i = 0; i < words.size(); ++i)
    {
        if(find(dislikes.begin(), dislikes.end(), words[i]) != dislikes.end())
        {
            cout << "BLEEP\n";
        }
        else
        {
            cout << words[i] << '\n';
        }
    }

    return 0;
}

