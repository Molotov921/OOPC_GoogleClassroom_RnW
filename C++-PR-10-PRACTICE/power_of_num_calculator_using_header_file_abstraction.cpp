/*Write a program to calculate the power of a number using header file  abstraction.*/
#include<iostream>
using namespace std;

class PowerCalculator 
{
    private:
        double base;
        int exponent;

    protected:
        double calculatePower() 
        {
            double result = 1.0;
            for (int i = 0; i < exponent; ++i) 
            {
                result *= base;
            }
            return result;
        }           

    public:
        PowerCalculator(double b, int exp) : base(b), exponent(exp){}

        double getPowerResult() 
        {
            return calculatePower();
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

    PowerCalculator powerCalc(base, exponent);
    double result = powerCalc.getPowerResult();
    cout<<"Result: "<<result<<endl;

    return 0;
}