/*wap to multiply of int as well as float value using function overloading*/
#include<iostream>
using namespace std;

class Multiplier 
{
    public:
        int multiply(int a, int b) 
        {
            return a * b;
        }

        float multiply(float a, float b) 
        {
            return a * b;
        }
};

int main() 
{
    Multiplier multiplier;

    int num1_int = 10;
    int num2_int = 20;
    cout<<"Multiplication of integers: "<<multiplier.multiply(num1_int, num2_int)<<endl;

    float num1_float = 3.14;
    float num2_float = 2.71;
    cout<<"Multiplication of floats: "<<multiplier.multiply(num1_float, num2_float)<<endl;

    return 0;
}