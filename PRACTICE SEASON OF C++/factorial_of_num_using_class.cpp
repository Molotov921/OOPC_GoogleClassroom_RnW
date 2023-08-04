/*Wap program to calculate Factorial of a number using class.*/
#include<iostream>
using namespace std;

class FactorialCalculator 
{
    public:
        unsigned long long calculateFactorial(int number) 
        {
            if (number < 0) 
            {
                throw runtime_error("Factorial is not defined for negative numbers.");
            }

            unsigned long long result = 1;
            for (int i = 1; i <= number; ++i) 
            {
                result *= i;
            }
            return result;
        }
};

int main() 
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    FactorialCalculator factorialCalc;
    try 
    {
        unsigned long long result = factorialCalc.calculateFactorial(num);
        cout<<"Factorial of "<<num<<" is: "<<result<<endl;
    } catch (const exception& e) 
    {
        cout<<"Exception occurred: "<<e.what()<<endl;
    }

    return 0;
}