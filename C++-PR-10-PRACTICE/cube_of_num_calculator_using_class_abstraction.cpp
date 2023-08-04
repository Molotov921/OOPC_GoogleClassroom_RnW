/*Write a program to calculate the cube of a number using class  abstraction.*/
#include<iostream>
using namespace std;

class CubeCalculator
{
    private:
        double number;

    public:
        CubeCalculator(double num) : number(num) {}

        double calculateCube() 
        {
            return number * number * number;
        }
};

int main() 
{
    double num;

    cout<<"Enter a number: ";
    cin>>num;

    CubeCalculator cubeCalc(num);
    double result = cubeCalc.calculateCube();

    cout<<"Cube of "<<num<<" is: "<<result<<endl;

    return 0;
}