#include <iostream> 

using namespace std;

int main()
{
    char a = 65;
    
    while (a < 123)
    {
        if(a < 91 || a >= 97)
        {
            cout << a  << '\t' << +a << '\n';
        }
        ++a;
    }

    return 0;
}
