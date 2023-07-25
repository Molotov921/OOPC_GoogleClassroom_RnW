/*wap to swap two values using hybrid inheritance*/
#include<iostream>
using namespace std;

class Swapper 
{
    public:
        void swap(int& a, int& b) 
        {
            int temp=a;
            a=b;
            b=temp;
        }
};

class SingleSwap : public Swapper 
{

};

class MultipleSwap : public Swapper
{

};

int main() 
{
    int num1=10, num2=20;

    SingleSwap singleSwap;
    singleSwap.swap(num1, num2);
    cout<<"After single swap: "<<num1<<" "<<num2<<endl;

    MultipleSwap multipleSwap;
    multipleSwap.swap(num1, num2);
    cout<<"After multiple swap: "<<num1<<" "<<num2<<endl;

    return 0;
}