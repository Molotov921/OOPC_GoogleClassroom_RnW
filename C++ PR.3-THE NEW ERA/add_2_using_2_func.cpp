/*WAP TO PERFORM ADDITION OF TWO NUMBERS USING CLASS, WITH TWO FUNCTIONS FIRST FUNCTION- GET VALUES FROM 
USER SECOND- PERFORM ADDITION*/
#include<iostream>
using namespace std;
class Adder 
{
public:
    int num1;
    int num2;
    
    void getValuesFromUser()
    {
        cout<<"Enter the first number: ";
        cin>>num1;
        
        cout<<"Enter the second number: ";
        cin>>num2;
    }
    
    int performAddition() 
    {
        return num1 + num2;
    }
};

int main() 
{
    Adder adder;
    adder.getValuesFromUser();
    int result = adder.performAddition();
    
    cout<<"The sum is: "<<result<<endl;
    
    return 0;
}