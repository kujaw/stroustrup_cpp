#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<double> temps; // temperatures

    for (double temp; cin>>temp; ) // read into temp
        temps.push_back(temp); // put temp into vector
    
    // compute mean temperature:
    double sum = 0;
    for (int x : temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';
    
    // compute median temperature :
    sort(temps.begin(), temps.end()); // sort temperatures
    if(temps.size() % 2 == 1)
    {
        cout << "Median temperature: " << temps[temps.size()/2+1] << '\n';
    }
    else
    {
        double median_even = (temps[temps.size()/2-1]+temps[temps.size()/2])/2.0;
        cout << "Median temperature: " << median_even << '\n';
    }

    return 0;
}
