// Populate two vectors with "name score" pairs, then print the values.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector <string> names;
    vector <int> scores;
    string name, input;
    int score;
    string delimiter = " ";

    while (true)
    {
        cout << "Enter name of a student and his score. If you want to quit and print all the "
                "student-score pairs, enter 'NoName 0'." << '\n';
        getline(cin, input);
        if (input == "NoName 0")
        {
            cout << "Exiting input section. Printing vectors." << '\n';
            break;
        }
        name = input.substr(0, input.find(delimiter));
        if (find(names.begin(), names.end(), name) != names.end())
        {
            cout << "Student already exsts. Duplicate. Please try aagain. " << '\n';
            continue;
        }

        names.push_back(name);
        score = stod(input.substr(input.find(delimiter), input.size()));
        scores.push_back(score);
    }

    int len_vec = names.size();

    for (int i = 0; i < len_vec; ++i)
    {
        if (i == len_vec - 1)
        {
            cout << names[i] << " " << scores[i] << endl;
        }
        else 
        {
            cout << names[i] << " " << scores[i] << '\n';
        }
    }

    return 0;
}
