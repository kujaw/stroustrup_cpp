#include <iostream>
#include <string>

using namespace std;

int main()
{
    string stringnumber;
    //string zero
    
    cout<<"Enter spelled-out number (suchc as 'zero', 'one', etc.). I accept only numbers from 0 "
          "to 4. Type 'quit' if you want to quit program."<<endl;

    while(cin>>stringnumber)
    {
        if(stringnumber == "zero" || stringnumber == "Zero")
        {
            cout<<"'"<<stringnumber<<"' = "<<0<<endl;
        }
        else if(stringnumber == "one" || stringnumber == "One")
        {
            cout<<"'"<<stringnumber<<"' = "<<1<<endl;
        }
        else if(stringnumber == "two" || stringnumber == "Two")
        {
            cout<<"'"<<stringnumber<<"' = "<<2<<endl;
        }
        else if(stringnumber == "three" || stringnumber == "Three")
        {
            cout<<"'"<<stringnumber<<"' = "<<3<<endl;
        }
        else if(stringnumber == "four" || stringnumber == "Four")
        {
            cout<<"'"<<stringnumber<<"' = "<<4<<endl;
        }
        else if(stringnumber == "quit" || stringnumber == "Quit")
        {
            break;
        }
        else
        {
            cout<<"Not a number I know."<<endl;
        }
    }
    
        return 1;
}
