#include <iostream>

using namespace std;

int square(int x)
{
    int result = 0;
    for (int i = 0; i < x; ++i)
    {
        result += x;
    }
    return result;
}

int main()
{
    cout << square(3) << '\n' << square(5) << '\n';
    return 0;
}
