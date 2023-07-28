/*Wap to perform addition of int value as well as float value using function overloading*/
#include<iostream>
using namespace std;

class Adder 
{
    public:
        int add(int a, int b) 
        {
            return a + b;
        }

        float add(float a, float b) 
        {
            return a + b;
        }
};

int main() 
{
    Adder adder;

    int num1_int = 10;
    int num2_int = 20;
    cout<<"Sum of integers: "<<adder.add(num1_int, num2_int)<<endl;

    float num1_float = 3.14;
    float num2_float = 2.71;
    cout<<"Sum of floats: "<<adder.add(num1_float, num2_float)<<endl;

    return 0;
}