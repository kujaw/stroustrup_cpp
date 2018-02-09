/* Take input value 'n' and find first n primes */

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


int main()
{
    int n, counter;
    int n_counter = 0;
    int number = 3;
    
    cout << "Enter the value 'n'. I will find first n primes: ";
    cin >> n;
    vector <int> primes;
    
    if (n>0) 
    { 
        primes.push_back(2);
        ++n_counter;
    }
    
    while (n_counter < n)
    {
        counter = 0;
        
        for (int i = number-1; i > 1; --i)
        {
            if (number % i == 0)
            {
                ++counter;
            }
        }

        if (counter == 0)
        {
            primes.push_back(number);
            ++n_counter;
        }
        
        ++number;
    }
    
    for (const auto& i: primes) cout << i << endl;
    
    return 1;
}