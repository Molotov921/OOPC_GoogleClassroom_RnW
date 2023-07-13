/*WAP TO PERFORM ALL ARITHMATIC TASK USING FUNCTION PROTOTYPE.*/
#include<iostream>
using namespace std;

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() 
{
    int num1, num2;
    int choice;
    
    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the second number: ";
    cin>>num2;

    cout<<"Select the arithmetic task to perform: " << endl;
    cout << "1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    int result;
    
    switch(choice)
    {
        case 1:
            result = add(num1, num2);
            cout<<"Sum: "<<result<<endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout<<"Difference: "<<result<<endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout<<"Product: "<<result<<endl;
            break;
        case 4:
            float quotient;
            quotient = divide(num1, num2);
            cout<<"Quotient: "<<quotient<<endl;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            break;
    }
    
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

float divide(int a, int b) 
{
    return static_cast<float>(a) / b;
}