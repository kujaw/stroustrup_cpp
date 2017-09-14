#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number, nGuesses = 0, low = 0, high = 100;
    string guess;

    do {
        cout << "Choose any number between 0 and 100, I'll try to guess your number\n";
        cin >> number;
        cout << "\n";
    } while (number < 1 || number > 100);

    while(nGuesses < 7)
    { 
        int middle = (low+high)/2;
        cout << "Guess no. " << nGuesses+1 << "\n";
        cout << "Is it " << middle << "? If it's lower type 'lower', if it's higher type 'higher', "
                "if it's your number type 'yes'\n";
        cin >> guess;
        if(guess == "higher")
        {
            low = middle+1;
        }
        else if(guess == "lower")
        {
            high = middle;
        }
        else if(guess == "yes")
        {
            cout << "Your number is " << number << "! I won!\n";
            break;
        }
        else
        {
            cout << "Unknown command, please try again\n";
            nGuesses--;
        }
        cout << "\n";
        nGuesses ++;
    }

    return 0;
}
