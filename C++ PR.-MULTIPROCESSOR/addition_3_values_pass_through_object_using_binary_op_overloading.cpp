/*Wap to addition of three values pass through object, using binary operator overloading*/
#include<iostream>
using namespace std;

class Adder 
{
    private:
        int value;

    public:
        Adder(int val) : value(val) {}

        Adder operator+(const Adder& other) 
        {
            int sum = value + other.value;
            return Adder(sum);
        }

        int getValue() const 
        {
            return value;
        }
};

int main() 
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    Adder obj1(num1);
    Adder obj2(num2);

    Adder result = obj1 + obj2 + Adder(num3);

    cout<<"Sum of three values: "<<result.getValue()<<endl;

    return 0;
}