#include <iostream> 

using namespace std;

int main()
{
    string input_str;
    double input_num;
    double input_num_cm;
    double smallest_num;
    double smallest_num_cm;
    double largest_num;
    double largest_num_cm;
    int num_of_values = 0;


    constexpr double cm_per_m = 100;
    constexpr double cm_per_in = 2.54;
    constexpr double in_per_ft = 12;

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
                    cout << "Unit: " << unit << "\n";
                    break;
                }
                else
                {
                    unit = input_str.substr(i);
                    cout << "Unit: " << unit << "\n";
                    break;
                }
            }
            
            if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft")
            {
                cout << "Invalid input. Please try again" << '\n';
                continue;
            }

            input_num = stod(input_num_str);
     
            // calculate unit and input_num to 'cm'
            if (unit == "m")
            {
                input_num_cm = input_num * cm_per_m;
            }
            else if (unit == "in")
            {
                input_num_cm = input_num * cm_per_in;
            }
            else if (unit == "ft")
            {
                input_num_cm = input_num * in_per_ft * cm_per_in;
            }
            else
            {
                input_num_cm = input_num;
            }

            cout << input_num_cm << " cm" << '\n';

            if (num_of_values == 0)
            {
                largest_num = input_num;
                largest_num_cm = input_num_cm;
                smallest_num = input_num;
                smallest_num_cm = input_num_cm;
                ++num_of_values;
                cout << "Largest=" << largest_num << unit << ". Smallest="; 
                cout << smallest_num << unit << '\n';
            }
            else if (input_num_cm > largest_num_cm)
            {
                largest_num = input_num;
                largest_num_cm = input_num_cm;
                ++num_of_values;
                cout << largest_num << unit << " - the largest so far." << '\n';
            }
            else if (input_num_cm < smallest_num_cm)
            {
                smallest_num = input_num;
                smallest_num_cm = input_num_cm;
                ++num_of_values;
                cout << smallest_num << unit << " - the smallest so far." << '\n';
            }
        } 
    }

    cout << "Numbers of values: " << num_of_values << '\n';

    return 0;
}
