// converts miles to kilometers

#include <iostream>

using namespace std;

int main()
{
    float miles;
    float kilometers;

    cout << "Enter the number of miles you want to be converted to kilometers: \n";
    cin >> miles;

    kilometers = miles * 1.609;

    cout << miles << " miles = " << kilometers << " kilometers.\n";

    return 0;
}
