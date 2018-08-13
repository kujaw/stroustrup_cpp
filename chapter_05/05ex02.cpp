// The following program takes in a temperature value in Celsius and converts it to Kelvin. This
// code has many errors in it. Find the errors, list them, and correct the code.

#include "../std_lib_facilities.h"
using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
    // int k = c + 273.15; <- should be floating point number
    double k = c + 273.15;
    // return int; <- cannot return only data type, variable must be returned
    return k;
}

int main() 
{
    double c = 0; // declare input variable

    cout << "Please enter the temperature in Celsius: "; // <- Add instructions so that the user knows.
    // cin >> d; // retrieve temperature to input variable <- variable 'd' is both not declared and necessary
    cin >> c; // retrieve temperature to input variable

    // double k = ctok("c"); // convert temperature <- ctok function argument is of double type, not string
    double k = ctok(c); // convert temperature

    cout << c << " Celsius is " << k << " Kelvins." << endl;
    // Cout << k << '/n' ; // print out temperature <- cout must be all small letters. '\n' instead of '/n'.
    //                                                 Add more descriptive response.
}
