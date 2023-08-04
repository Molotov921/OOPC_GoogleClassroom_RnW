/*WAP TO SUM OF TWO NUMBER GETTING FROM USER USING CLASS ABSTRACTION*/
#include<iostream>
using namespace std;

class NumberAdder 
{
    private:
        double num1;
        double num2;

    public:
        NumberAdder(double n1, double n2) : num1(n1), num2(n2){}

        double calculateSum() 
        {
            return num1 + num2;
        }
};

int main() 
{
    double num1, num2;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    NumberAdder adder(num1, num2);
    double sum = adder.calculateSum();

    cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<sum<<endl;

    return 0;
}