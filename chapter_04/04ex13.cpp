#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


int main()
{
    vector <int> numbers(99);
    vector <int> primes;
    iota(begin(numbers), end(numbers), 2);
    //for (const auto& i: numbers) cout << i << " ";
    //cout << "\n";

    for (size_t i = 0; i < numbers.size(); ++i)
    {
        if (numbers[i] % 2 != 0 && numbers[i] != 2)
        {
            if (numbers[i] % 3 != 0 && numbers[i] != 3)
            {
                if (numbers[i] % 5 != 0 && numbers[i] != 5)
                {
                    primes.push_back(numbers[i]);
                }
            }
        }
    }
    for (const auto& i: primes) cout << i << " ";
    // 2 is a prime number
    cout << endl;
    
    //for (const auto& i: numbers)
    //{
    //    if (i % 2 == 0)
    //    {
    //        numbers.erase(numbers[i]);
    //    }
    //}

    return 1;
}
