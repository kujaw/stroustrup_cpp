#include "../std_lib_facilities.h"
using namespace std;

double ctok(double c) // converts Celsius to Kelvin
{
    double k = c + 273.15;
    return k;
}

int main() 
{
    double c; // declare input variable
    cin >> c; // retrieve temperature to input variable
    double k = ctok(c); // convert temperature
    cout << k << '\n' ; // print out temperature
}
