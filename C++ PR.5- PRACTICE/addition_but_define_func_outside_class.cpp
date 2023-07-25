/*wap to perform addition but define that function outside the class*/
#include<iostream>
using namespace std;

class Calculator 
{
    private:
        int num1;
        int num2;

    public:
    
        void setNum1(int num) 
        {   
            num1 = num;
        }

        void setNum2(int num) 
        {
            num2 = num;
        }

        int add() 
        {
            return num1 + num2;
        }
};

int main() 
{
    Calculator calc;

    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    calc.setNum1(num1);
    calc.setNum2(num2);
    int result = calc.add();

    cout<<"Sum: "<<result<<endl;

    return 0;
}