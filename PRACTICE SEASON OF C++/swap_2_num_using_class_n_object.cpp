/*Wap program to swap two numbers using class and object.*/
#include<iostream>
using namespace std;

class NumberSwapper 
{
    public:
        void swapNumbers(double& num1, double& num2) 
        {
            double temp = num1;
            num1 = num2;
            num2 = temp;
        }
};

int main() 
{
    double num1, num2;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    NumberSwapper swapper;
    swapper.swapNumbers(num1, num2);

    cout<<"After swapping, first number is: "<<num1<<endl;
    cout<<"After swapping, second number is: "<<num2<<endl;

    return 0;
}