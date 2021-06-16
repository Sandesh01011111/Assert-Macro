//A program to validate whether a user keys in a valid date of birth.
//The program will use the assert() funtion to validate that dates
//fall within the ranges. It will also take leap years into account.
//The program will then tell the user how old they are this year and
//if they were born on a leap year.


#include <iostream>
#include <cassert>


void get_User_Date_Of_Birth(int &day_P, int &month_P, int &year_P);
//A funtion for the user to key in their date of birth. This function
//will use the assert function to check if the user entered a valid
//date of birth. The range for day is 01-31 if months are 1,3,5,7,8,10
//and 12. The range for day is 01-28 if the month is 2 and the year is
//not a leap year otherwise the range for day is 01-29. The range for
//day is 01-30 if months are 4,6,9,11.


int age_Of_User(int &year_P);
//This function is used to calculate the age of the user beased on the
//current year and the year the user was born. For flexibility purposes
//this function will ask the user what is the year right now to allow
//it to be used at a future date or previous date. It also calculates if
//the user was born on a leap year based on the year the user was born
//and displays a message to tell the user if they were born on a leap
//year or not and filly returns the age of the user which will be used to
//display the age of the user.


void display_Age(int &input);
//This is a simple function to display the age of the user.


int main()
{
    int day, month, year, user_Age;


    get_User_Date_Of_Birth(day, month, year);


    user_Age = age_Of_User(year);


    display_Age(user_Age);
}


void get_User_Date_Of_Birth(int &day_P, int &month_P, int &year_P)
{
    using namespace std;


    cout << "Enter your date of birth(Press ENTER after each input): \n";


    cin >> day_P >> month_P >> year_P;


    assert(month_P >= 1 && month_P <= 12);


    if(month_P == 1 || month_P == 3 || month_P == 5 || month_P == 7 || month_P == 8 || month_P == 10 || month_P == 12)
    {
        assert(day_P >= 1 && day_P <= 31);
    }


    if(month_P == 4 || month_P == 6 || month_P == 9 || month_P == 11)
    {
        assert(day_P >= 1 && day_P <= 30);
    }


    if(month_P == 2 && year_P % 4 == 0)
    {
        assert(day_P >= 1 && day_P <= 29);
    }


    else


    if(month_P == 2 && year_P % 4 != 0)
    {
        assert(day_P >= 1 &&day_P <= 28);
    }


    cout << endl;
}


int age_Of_User(int &year_P)
{
    using namespace std;


    int current_Year;


    cout << "What year is it right now: " << endl;


    cin >> current_Year;


    cout << endl;


    if(year_P % 4 == 0)
    {
        cout << "You are born on a leap year!" << endl << endl;
    }


    else
    {
        cout << "You are not born on a leap year!" << endl << endl;
    }


    return current_Year - year_P;
}


void display_Age(int &input)
{
    using namespace std;


    cout << "You are " << input << " years old." << endl;
}
