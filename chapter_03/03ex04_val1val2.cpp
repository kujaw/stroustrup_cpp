// some calculations with two values provided by user

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int val1, val2;

    cout << "Enter two integer numbers. This program will make few calculations between them: \n";
    cin >> val1 >> val2;

    cout << "Sum is: " << val1 + val2 << "\n";
    cout << "Difference is: " << abs(val1 - val2) << "\n";
    cout << "Product is: " << val1 * val2 << "\n";

    if (val1 < val2)
    {
        cout << "Ratio is " << val1 << "/" << val2 << "\n";
        cout << val1 << " is smaller than " << val2 << "\n";
    }
    else
    {
        cout << "Ratio is " << val2 << "/" << val1 << "\n";
        cout << val2 << " is smaller than " << val1 << "\n";
    }



    return 0;
}


