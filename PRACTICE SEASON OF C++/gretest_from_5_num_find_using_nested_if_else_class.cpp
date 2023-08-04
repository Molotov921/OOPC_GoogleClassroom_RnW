/*Wap program to find Greatest among five numbers using Nested if else  Class.*/
#include<iostream>
using namespace std;

class NumberGreatestFinder 
{
    public:
        double findGreatest(double num1, double num2, double num3, double num4, double num5) 
        {
            double greatest = num1;

            if (num2 > greatest) 
            {
                greatest = num2;
            }

            if (num3 > greatest) 
            {   
                greatest = num3;
            }

            if (num4 > greatest) 
            {
                greatest = num4;
            }

            if (num5 > greatest) 
            {  
                greatest = num5;
            }

            return greatest;
        }
};

int main() 
{
    double num1, num2, num3, num4, num5;

    cout<<"Enter five numbers: ";
    cin>>num1>>num2>>num3>>num4>>num5;

    NumberGreatestFinder finder;
    double greatest = finder.findGreatest(num1, num2, num3, num4, num5);

    cout<<"The greatest among the five numbers is: "<<greatest<<endl;

    return 0;
}