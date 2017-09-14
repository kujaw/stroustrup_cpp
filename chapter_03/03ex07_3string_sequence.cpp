#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    const int n = 3;
    int m = n;
    vector<string> stringarray;
    string mystring;

    cout << "Please enter three names separated by space:\n";
    do {
        cin >> mystring;
        stringarray.push_back(mystring);
        m--;
    } while (m > 0);

    sort(stringarray.begin(), stringarray.end());

    for(int i = 0; i < n; i++)
    {
        cout << stringarray[i] << ", ";
    }

    cout << "\n";

    return 1;
}
