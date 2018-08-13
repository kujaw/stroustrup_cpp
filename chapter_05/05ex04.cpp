// Absolute zero is the lowest temperature that can be reached; it is –273.15°C, or 0K. The above
// program, even when corrected, will produce erroneous results when given a temperature below
// this. Place a check in the main program that will produce an error if a temperature is given
// below –273.15°C.
// Do exercise 3 again, but this time handle the error inside ctok().

#include "../std_lib_facilities.h"
using namespace std;

float abs_zero = -273.15; // absolute zero in Celsius

double ctok(double c) // converts Celsius to Kelvin
{
    if (c < abs_zero)
    {
        error("Temperature below absolute zero. Please enter correct temperature value, above -273.15.");
    }
    double k = c + abs_zero;
    return k;
}

int main() 
{
    double c; // declare input variable


    while (true)
    {
        cout << "Please enter the temperature in Celsius: ";
        cin >> c; // retrieve temperature to input variable
        
        if (c < abs_zero)
        {
            cout << "Temperature below absolute zero. Please enter correct temperature value, above -273.15.\n";
            continue;
        }
        else
        {
            break;
        }
    }

    double k = ctok(c); // convert temperature
    cout << c << " Celsius is " << k << " Kelvins." << endl;
}
