/*WAP TO PERFORM ARITHMATIC OPERATION USING FRIEND CLASS*/
#include<iostream>
using namespace std;

class FriendClass;

class Calculator 
{
    private:
        int num1;
        int num2;

    public:
        Calculator(int n1, int n2) : num1(n1), num2(n2){}

        int add()const 
        {
            return num1 + num2;
        }

        int subtract()const 
        {
            return num1 - num2;
        }

        int multiply()const 
        {
            return num1 * num2;
        }

        double divide()const 
        {
            if (num2 != 0) 
            {
                return static_cast<double>(num1) / num2;
            }
            return 0.0;
        }

    friend class FriendClass;
};

class FriendClass 
{
    public:
        static void displayValues(const Calculator& calc) 
        {
 
            cout<<"num1: "<<calc.num1<<endl;
            cout<<"num2: "<<calc.num2<<endl;
        }
};

int main() 
{
    Calculator calculatorObj(10, 5);

    cout<<"Addition: "<<calculatorObj.add()<<endl;
    cout<<"Subtraction: "<<calculatorObj.subtract()<<endl;
    cout<<"Multiplication: "<<calculatorObj.multiply()<<endl;
    cout<<"Division: "<<calculatorObj.divide()<<endl;

    FriendClass::displayValues(calculatorObj);
    return 0;
}