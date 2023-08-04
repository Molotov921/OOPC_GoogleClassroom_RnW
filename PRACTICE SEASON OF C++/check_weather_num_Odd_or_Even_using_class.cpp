/*Wap program to check weather a number is Odd or Even using class.*/
#include<iostream>
using namespace std;

class NumberChecker 
{
    public:
        bool isEven(int number) 
        {
            return number % 2 == 0;
        }
};

int main() 
{
    int num;
    NumberChecker numberChecker;

    cout<<"Enter a number: ";
    cin>>num;

    if(numberChecker.isEven(num)) 
    {
        cout<<num<<" is an even number."<<endl;
    }
    else 
    {
        cout<<num<<" is an odd number."<<endl;
    }

    return 0;
}