#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int squareNum = 1;
    long long squareVal = 1;
    int step = 1;
    
    cout << squareNum << " " << squareVal << "\n";
    
    while (squareNum < 64)
    {
        squareNum++;
        squareVal *= 2;
        cout << squareNum << " " << squareVal << "\n";
        if (squareVal >= 1000 && step == 1)
        {
            cout << squareNum << " to get at least 1 000 grains.\n";
            step++;
        }
        
        if (squareVal >= 1000000 && step == 2)
        {
            cout << squareNum << " to get at least 1 000 000 grains.\n";
            step++;
        }
        
        if (squareVal >= 1000000000 && step == 3)
        {
            cout << squareNum << " to get at least 1 000 000 000 grains." << endl;
            step++;
            break;
        }
    }
    
    return 1;
}