#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Please enter the number of your choice"<<endl;
    cin>>num;

    if(num%2 == 1)
    {
        cout<<"The value "<<num<<" is an odd number."<<endl;
    }
    else
    {
        cout<<"The value "<<num<<" is an even number."<<endl;
    }

    return 1;
}
