#include <iostream>
#include <vector>

using namespace std;

//vector <int> vPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int main()
{
    vector <int> vPrimesComputed;
    int counter, maxVal;
    
    cout << "Enter maximum value to find prime numbers up to this value: ";
    cin >> maxVal;
    
    vPrimesComputed.push_back(2);
    
    for (int i = 3; i < maxVal+1; ++i)
    {
        counter = 0;
        
        for (int j = i-1; j > 1; --j)
        {
            if (i % j == 0)
            {
                counter++;
            }
        }
        
        if (counter == 0)
        {
            vPrimesComputed.push_back(i);
        }
    }
    for (const auto& k: vPrimesComputed) cout << k << " ";
    cout << endl;
    
    
    return 1;
}