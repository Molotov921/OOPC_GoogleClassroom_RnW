/*Write a program to demonstrate the use of virtual function*/
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

class CustomPowerCalculator : public PowerCalculator 
{
    public:
        double calculatePower(double base, int exponent) override 
        {
            if (exponent == 0) 
            {
                return 1.0;
            } 
            else if (exponent < 0) 
            {
                return 1.0 / calculatePower(base, -exponent);
            }
            else 
            {
                double result = 1.0;
                while (exponent > 0) 
                {
                    if (exponent % 2 == 1) 
                    {
                        result *= base;
                    }
                    base *= base;
                    exponent /= 2;
                }
                return result;
            }
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

    PowerCalculator* powerCalc;
    CustomPowerCalculator customPowerCalc;

    powerCalc = &customPowerCalc;

    double result = powerCalc->calculatePower(base, exponent);
    cout<<"Result: "<<result<<endl;

    return 0;
}