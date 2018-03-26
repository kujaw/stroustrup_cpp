// Populate two vectors with "name score" pairs, then print the values.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// check if string is an integer number
bool has_only_digits(const string s)
{
  return s.find_first_not_of( "0123456789" ) == string::npos;
}

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

        // check if input string contains space (if it is only one word or more)
        if (input.find(delimiter) == string::npos)
        {
            // if input is a number
            if (has_only_digits(input))
            {
                score = stod(input);
                int counter = 0;
                for (size_t i = 0; i < scores.size(); ++i)
                {
                    // if student has specified score, print his name and score
                    if (scores[i] == score)
                    {
                        cout << names[i] << " " << scores[i] << '\n';
                        ++counter;
                    }
                }
                if (counter == 0)
                {
                    cout << "Score not found." << '\n';
                }
            }
            // if input isn't a number
            else
            {
                name = input;
                // if name found, print name and corresponding score
                if (find(names.begin(), names.end(), name) != names.end())
                {
                    size_t index = distance(names.begin(), find(names.begin(), names.end(), name));
                    cout << "Student's score: " << scores[index] << '\n';
                }
                else
                {
                    cout << "Student not found" << '\n';
                }
            }
        }
        // if string contains > 1 word
        else
        {
            name = input.substr(0, input.find(delimiter));
            // if student's name is present in names vector, go to the beginning of the loop
            if (find(names.begin(), names.end(), name) != names.end())
            {
                cout << "Student already exists. Duplicate. Please try aagain. " << '\n';
                continue;
            }

            // add name and score to particular vectors
            names.push_back(name);
            score = stod(input.substr(input.find(delimiter), input.size()));
            scores.push_back(score);
        }
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
