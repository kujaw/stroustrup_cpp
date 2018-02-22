// convert currencies to dollars 

//#include "std_lib_facilities.h"
#include <iostream>

using namespace std;

int main()
{
    constexpr double cny_per_usd = 6.89;
    constexpr double gbp_per_usd = 0.79;
    constexpr double eur_per_usd = 0.93;
    constexpr double pln_per_usd = 4.13;

    double amount = 1;
    char unit = 0;

    cout << "Please enter an amount of money followed by a currency number (cny"
            "=a, gpb=b, eur=c, pln=d):\n";
    cin >> amount >> unit;
    cout << amount << '\n';
    if (amount == '|')
    {
        return 0;
    }

    switch (unit)
    {
    case 'a':
        cout << amount << " CNY == " << cny_per_usd*amount << " USD\n";
        break;
    case 'b':
        cout << amount << " GBP == " << gbp_per_usd*amount << " USD\n";
        break;
    case 'c':
        cout << amount << " EUR == " << eur_per_usd*amount << " USD\n";
        break;
    case 'd':
        cout << amount << " PLN == " << eur_per_usd*amount << " USD\n";
        break;
    default:
        cout << "Sorry, I don't know a currency called " << unit << "\n";
        break;
    }

    return 0;
}
