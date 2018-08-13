#include <iostream>
//#include "../std_lib_facilities.h"

using namespace std;

void error(string s1, string s2)
{
    throw runtime_error(s1+s2);
}

int main()
{
//try 
//{
    double d = 0;
    cin >> d;
    if (!cin) error("couldn't read a double in 'some_function()'", " __second_string__");
//}
//catch (runtime_error& e)
//{
//    cerr << "runtime_error: " << e.what() << '\n';
//    keep_window_open();
//    return 1;
//}
//
    return 0;
}
