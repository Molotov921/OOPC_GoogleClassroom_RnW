/*wap program  to perform all arithmetic operation using multilevel inheritance*/
#include<iostream>
using namespace std;

class Addition 
{
    public:
        int add(int a, int b) 
        {
            return a + b;
        }
};

class Subtraction : public Addition 
{
    public:
        int subtract(int a, int b) 
        {
            return a - b;
        }
};

class Multiplication : public Subtraction 
{
    public:
        int multiply(int a, int b) 
        {
            return a * b;
        }
};

class Division : public Multiplication 
{
    public:
        int divide(int a, int b) 
        {
            if (b == 0) 
            {
                cout<<"Error: Division by zero is not allowed."<<endl;
                return 0;
            }
            return a / b;
        }
};

int main() 
{
    Division calculator;

    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Addition: "<<calculator.add(a, b)<<endl;
    cout<<"Subtraction: "<<calculator.subtract(a, b)<<endl;
    cout<<"Multiplication: "<<calculator.multiply(a, b)<<endl;
    cout<<"Division: "<<calculator.divide(a, b)<<endl;

    return 0;
}