/*WAP TO SWAP TWO NUMBER USING INLINE FUNCTION*/
#include<iostream>
using namespace std;
inline void swapNumbers(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}
int main() 
{
    int num1;
    int num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    swapNumbers(num1, num2);

    cout<<"After swapping: num1 = "<< num1 <<", num2 = "<<num2<<endl;

    return 0;
}