/*define the constructor and perform all arithmetic task*/
#include<iostream>
using namespace std;

class ArithmeticOperations 
{
        private:
            double num1;
            double num2;

        public:
            ArithmeticOperations(double number1, double number2) 
            {
                num1 = number1;
                num2 = number2;
            }

            double add() const 
            {
                return num1 + num2;
            }

            double subtract() const 
            {
                return num1 - num2;
            }

            double multiply() const 
            {
                return num1 * num2;
            }

            double divide() const 
            {
                if (num2 == 0) 
                {
                    cerr<<"Error: Division by zero!"<<endl;
                    return 0.0;
                }
                return num1 / num2;
            }
};

int main() 
{
    ArithmeticOperations operations(10.0, 5.0);

    cout<<"Addition: "<<operations.add()<<endl;
    cout<<"Subtraction: "<<operations.subtract()<<endl;
    cout<<"Multiplication: "<<operations.multiply()<<endl;
    cout<<"Division: "<<operations.divide()<<endl;

    return 0;
}