/*Wap program to check leap year using classes.*/
#include<iostream>
using namespace std;

class LeapYearChecker 
{
    public:    
        bool isLeapYear(int year) 
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
            {
                return true;
            }
            return false;
        }
};

int main() 
{
    int year;
    LeapYearChecker leapYearChecker;

    cout<<"Enter a year: ";
    cin>>year;

    if(leapYearChecker.isLeapYear(year)) 
    {
        cout<<year<<" is a leap year."<<endl;
    }
    else 
    {
        cout<<year<<" is not a leap year."<<endl;
    }

    return 0;
}