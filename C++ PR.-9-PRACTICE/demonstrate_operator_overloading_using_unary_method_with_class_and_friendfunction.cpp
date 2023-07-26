/*Wap to demonstrate operator overloading using unary method with class method and friend function method*/
#include<iostream>
using namespace std;

class Number 
{
    private:
        int value;

    public:
        Number(int val) : value(val) {}

        Number operator-() 
        {
            return Number(-value);
        }

        void display() 
        {
            cout << "Value: " << value << endl;
        }

    friend Number operator-(const Number& num);
};

Number operator-(const Number& num) 
{
    return Number(-num.value);
}

int main() 
{
    Number num1(10);
    Number num2(5);

    Number negNum1 = -num1;
    Number negNum2 = -num2;

    num1.display();
    negNum1.display();
    
    num2.display();
    negNum2.display();

    return 0;
}