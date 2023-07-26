/*Wap to demonstrate operator overloading using binary method with class method and friend function method*/
#include<iostream>
using namespace std;

class Complex 
{
    private:
        double real;
        double imaginary;

    public:
        Complex(double r, double i) : real(r), imaginary(i) {}

        Complex operator+(const Complex& other) 
        {
            return Complex(real + other.real, imaginary + other.imaginary);
        }

        void display() 
        {
            cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
        }

        friend Complex operator+(const Complex& c1, const Complex& c2);
};

    Complex operator+(const Complex& c1, const Complex& c2) 
    {
        return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
    }

int main() 
{
    Complex c1(3.5, 2.7);
    Complex c2(1.2, 4.8);

    Complex result1 = c1 + c2;

    Complex result2 = c1 + c2;

    result1.display();
    result2.display();

    return 0;
}