/*Wap to demonstrate method overloading*/
#include<iostream>
using namespace std;

class MathOperations 
{
    public:
        int add(int a, int b) 
        {
            return a + b;
        }

        int add(int a, int b, int c) 
        {
            return a + b + c;
        }

        double add(double a, double b) 
        {
            return a + b;
        }
};

int main() 
{
    MathOperations math;

    int result1 = math.add(5, 10);
    int result2 = math.add(5, 10, 15);

    double result3 = math.add(3.14, 2.71);

    cout<<"Result 1: "<<result1<<endl;
    cout<<"Result 2: "<<result2<<endl;
    cout<<"Result 3: "<<result3<<endl;

    return 0;
}