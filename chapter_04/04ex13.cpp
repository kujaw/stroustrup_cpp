/* Program finds prime numbers from 1 to 100 using Sieve of Eratosthenes method */

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


int main()
{
    vector <int> numbers(99);
    vector <int> primes;

    // fills vector with incremented values starting from 2
    iota(begin(numbers), end(numbers), 2);

    // manually add numbers 2, 3 and 5 to primes vector
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);

    // preform Sieve of Eratosthenes method
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] % 2 != 0)
        {
            if (numbers[i] % 3 != 0)
            {
                if (numbers[i] % 5 != 0)
                {
                    primes.push_back(numbers[i]);
                }
            }
        }
    }
    
    for (const auto& i: primes) cout << i << endl;
   
    return 1;
}
