/*Write  a program to demonstrate the use of pointer object.*/
#include<iostream>
using namespace std;

class PowerCalculator 
{
    public:
        virtual double calculatePower(double base, int exponent) 
        {
            double result = 1.0;
            for (int i = 0; i < exponent; ++i) 
            {
                result *= base;
            }
            return result;
        }
};

int main() 
{
    double base;
    int exponent;

    cout<<"Enter the base: ";
    cin>>base;

    cout<<"Enter the exponent: ";
    cin>>exponent;

    PowerCalculator powerCalc;

    PowerCalculator* powerPtr = &powerCalc;

    double result = powerPtr->calculatePower(base, exponent);
    cout<<"Result: "<<result<<endl;

    return 0;
}