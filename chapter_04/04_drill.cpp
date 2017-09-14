#include <iostream> 

using namespace std;

int main()
{
    string input_str;
    double input_num;
    double smallest_num;
    double largest_num;
    int loop_iteration = 0;

    constexpr double cm_per_m = 100;
    constexpr double cm_per_in = 2.54;
    constexpr double in_per_ft = 12;

    while (true)
    {   
        string temp_num_str = "";
        string unit = "";

        cout << "Give me a number and unit (cm, m, in, ft) or type '|' if you want "
                "to quit: \n";
        getline(cin, input_str);
    
        if (input_str == "|" )
        {
            return 0;
        }
 
        for (int i = 0; i < input_str.length(); ++i)
        { 
            if (isdigit(input_str[i]) || input_str[i] == '.' || input_str[i] == '-')
            {
                temp_num_str += input_str[i];
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

        input_num = stof(temp_num_str);
     
        if (loop_iteration == 0)
        {
            largest_num = input_num;
            smallest_num = input_num;
            ++loop_iteration;
            //cout << "1st if" << '\n';
            cout << "Largest=" << largest_num << unit << ". Smallest="; 
            cout << smallest_num << unit << '\n';
        }
        else if (input_num > largest_num)
        {
            //cout << "2nd if" << '\n';
            largest_num = input_num;
            cout << "Largest number is: " << largest_num << unit << '\n';
        }
        else if (input_num < smallest_num)
        {
            //cout << "3rd if" << '\n';
            smallest_num = input_num;
            cout << "Smallest number is: " << smallest_num << unit << '\n';
        }

        cout << '\n';
    }

    return 0;
}
