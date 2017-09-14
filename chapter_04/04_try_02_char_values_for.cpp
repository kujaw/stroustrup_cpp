
#include <iostream> 

using namespace std;

int main()
{
    char a = 'a';
    
    for (int i = 65; i < 123; ++i)
    {
        if (i > 90 && i < 97)
        {}
        else
        {
            a = i;
            cout << a << '\t' << +a << '\n';
        }
    }

    return 0;
}
