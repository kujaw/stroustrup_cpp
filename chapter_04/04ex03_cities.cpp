#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    double dist, sum_of_distances;
    vector<double> distances;

    while(true) 
    {
        cout << "Enter distance between some two cities. Enter '0' if you want to finish. " 
             << "\n";
        cin >> dist;
        if (dist == 0)
        {
            break;
        }
        distances.push_back(move(dist));
    }

    for(const auto& n : distances)
    {
        sum_of_distances += n;
    }

    cout << "Sum of distances is " << sum_of_distances << "\n";

    auto furthest = max_element(begin(distances), end(distances));
    auto closest = min_element(begin(distances), end(distances));

    cout << "Furthest distance is " << *furthest<< ", closest distance is " << *closest << "\n";

    cout << "Mean of distances is " << sum_of_distances / distances.size() << endl;

    return 0;
}
