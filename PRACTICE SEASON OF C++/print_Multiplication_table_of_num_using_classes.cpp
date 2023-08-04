/*Wap program to print Multiplication table of a number using classes.*/
#include<iostream>
using namespace std;

class MultiplicationTablePrinter 
{
    public:
        void printMultiplicationTable(int number) 
        {
            cout<<"Multiplication table of "<<number<<":"<<endl;
            for (int i = 1; i <= 10; ++i) 
            {
                cout<<number<<" x "<<i<<" = "<<(number * i)<<endl;
            }
        }
};

int main() 
{
    int num;
    MultiplicationTablePrinter tablePrinter;

    cout<<"Enter a number: ";
    cin>>num;

    tablePrinter.printMultiplicationTable(num);

    return 0;
}