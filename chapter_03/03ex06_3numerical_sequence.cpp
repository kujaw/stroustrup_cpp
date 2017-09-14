// prompt user to enter three integers, than print them in numerical sequence separated by commas

#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    int values[n];

    cout << "Enter three integers separated by space: \n";
    cin >> values[0] >> values[1] >> values[2];

    for(int i = 1; i < n; i++)
    {
        int tmp;

        for(int j = i; j > 0; j--)
        {
            if(values[j] < values[j-1])
            {
                tmp = values[j];
                values[j] = values[j-1];
                values[j-1] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << values[i] << ", ";
    }

    cout << "\n";

    return 0;
}
