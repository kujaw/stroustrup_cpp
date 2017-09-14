#include "std_lib_facilities.h"

using namespace std;

int main()
{
    cout << "Enter the name of the person you want to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ", \n";
    cout << "    " << "How are you doing? I miss you since the first day I left "
            "Warsaw. I'm doing well, lot of work and other duties. I've got good"
            " news - I have a job in Lodz in Fujitsu starting from 2nd of "
            "January. But that's just in case of failing Nokia Academy in Cracow"
            ". If I'll pass the exams I will get a job and live in Cracow, can "
            "you imagine!\n";
    cout << "Please enter the name of another friend of yours:\n";
    string friend_name;
    cin >> friend_name;
    cout << "But tell me first, have you seen " << friend_name << " lately?\n";
    cout << "Please enter 'm' if your friend is a male or 'f' if a female\n";
    char friend_sex = 0;
    cin >> friend_sex;

    if(friend_sex == 'm')
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    else if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";

    cout << "Please enter the age of your letter's recipient:\n";
    int age;
    cin >> age;

    cout << "I hear you just had a birthday and you are " << age <<
            " years old!\n";

    if (age <= 0 || age >= 110)
        simple_error("you're kidding!");

    if (age < 12)
        cout << "Next year you will be " << age + 1 << ".\n";
    else if (age == 17)
        cout << "Next year you will be able to vote.\n";
    else if (age < 70)
        cout << "I hope you're enjoying retirement.\n";

    cout << "Yours sincerely,\n\n" << "Robert\n";

    return 0;
}
