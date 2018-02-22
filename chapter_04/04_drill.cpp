#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

constexpr double cm_per_m = 100;
constexpr double cm_per_in = 2.54;
constexpr double in_per_ft = 12;

// Check if unit is one of allowed units (cm, m, in, ft)
bool checkUnit(string unit)
{
    if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Calculate values to centimeters
double calculateToCm(double value, string unit)
{
    if (unit == "m")
    {
        return value * cm_per_m;
    }
    else if (unit == "in")
    {
        return value * cm_per_in;
    }
    else if (unit == "ft")
    {
        return value * in_per_ft * cm_per_in;
    }
    else
    {
        return value;
    }
}

int main()
{
    string input_str;
    string smallest_num_unit;
    string largest_num_unit;
    double input_num;
    double input_num_cm;
    double smallest_num;
    double smallest_num_cm;
    double largest_num;
    double largest_num_cm;
    double sum_of_values_cm = 0;
    int num_of_values = 0;

    vector<double> vvalues;

    while (true)
    {   
        string input_num_str = "";
        string unit = "";
        int input_str_len;

        cout << "Give me a number and unit (cm, m, in, ft) or type '|' if you want "
                "to quit: \n";
        getline(cin, input_str);
    
        if (input_str == "|" )
        {
            break;
        }
        else if (isdigit(input_str[0]) == false)
        {
            cout << "Invalid input. Please try again" << '\n';
        }
        else
        {
            input_str_len = input_str.length();
                                                                                         
            for (int i = 0; i < input_str_len; ++i)
            {
                if (isdigit(input_str[i]) || input_str[i] == '.' || input_str[i] == '-')
                {
                    //cout << "i: " << i << "\n";
                    input_num_str += input_str[i];
                }
                else if (input_str[i] == ' ')
                {
                    unit = input_str.substr(i+1);
                    break;
                }
                else
                {
                    unit = input_str.substr(i);
                    break;
                }
            }
            
            // If unit is correct, move on, else continue from the beginning of the loop
            if (checkUnit(unit)) {}
            else
            {
                continue;
            }

            input_num = stod(input_num_str);

            // Calculate value to centimeters
            input_num_cm = calculateToCm(input_num, unit);

            cout << input_num_cm << " cm" << '\n';

            if (num_of_values == 0)
            {
                largest_num = input_num;
                largest_num_cm = input_num_cm;
                largest_num_unit = unit;
                smallest_num = input_num;
                smallest_num_cm = input_num_cm;
                smallest_num_unit = unit;
                cout << "Largest=" << largest_num << unit << ". Smallest="; 
                cout << smallest_num << unit << '\n';
            }
            else if (input_num_cm > largest_num_cm)
            {
                largest_num = input_num;
                largest_num_cm = input_num_cm;
                largest_num_unit = unit;

                cout << largest_num << unit << " - the largest so far." << '\n';
            }
            else if (input_num_cm < smallest_num_cm)
            {
                smallest_num = input_num;
                smallest_num_cm = input_num_cm;
                smallest_num_unit = unit;
                cout << smallest_num << unit << " - the smallest so far." << '\n';
            }
        ++num_of_values;
        sum_of_values_cm += input_num_cm;
        vvalues.push_back(input_num_cm / cm_per_m);
        }
    }

    cout << "The smallest value is " << smallest_num << " " << smallest_num_unit << ".\n";
    cout << "The largest value is " << largest_num << " " << largest_num_unit << ".\n";
    cout << "Numbers of values: " << num_of_values << '\n';
    cout << "Sum of values: " << sum_of_values_cm / cm_per_m << " m." << '\n';

    sort(vvalues.begin(), vvalues.end());
    for (auto i = vvalues.begin(); i != vvalues.end(); ++i)
    {
        cout << *i << "m ";
    }
    cout << endl;

    return 0;
}
