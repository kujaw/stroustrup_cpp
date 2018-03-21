// Program that solves quadratic equations

#include <iostream>
#include <cmath>
#include <string>
#include <regex>

using namespace std;

bool is_number(const string& s)
{
    regex r("[1-9]+\\.?[0-9]?");
    if (regex_match(s, r))
    {
        return true;
    }
    return false;
}

int main()
{
    double a, b, c, x1, x2, discriminant;
    double nums[3];
    string input;

    cout << "This program solves quadratic equations. Please provide a, b and c. Then it will "
            "output x1 and x2. Type q if you want to quit." << '\n';
    while (true)
    {
        for (int i = 97; i < 100; ++i)
        {
            cout << (char)i << ": ";
            cin >> input;

            // check if user wants to quit
            if (input == "q")
            {
                cout << "Exiting the program... " << endl;
                return 0;
            }
            else if (is_number(input) == false)
            {
                cout << "Not a floating point number, please try again" << '\n';
                --i;
                continue;
            }

            nums[i-97] = stod(input);
        }

        // for better readability
        a = nums[0];
        b = nums[1];
        c = nums[2];

        discriminant = pow(2, b) - 4*a*c;

        if (discriminant < 0)
        {
            cout << "Discriminant: " << discriminant << '\n';
            cout << "Function is not touching the x axis. Solution is complex, not available in this "
                    "version. Please try again." << '\n';
            continue;
        }
        else if (discriminant == 0)
        {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            cout << "Discriminant: " << discriminant << '\n';
            cout << "x: " << x1 << endl;
        }
        else
        {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);

            cout << "Discriminant: " << discriminant << '\n';
            cout << "x1: " << x1 << '\n' << "x2: " << x2 << endl;
        }
        cout << "Please provide a, b and c or 'q' to exit the program." << '\n';
    }
    return 0;
}
