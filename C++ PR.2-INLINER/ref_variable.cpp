/*WAP TO PRINT VALUE OF VARIABLE USING REFERENCE VARIABLE*/
#include<iostream>
using namespace std;
int main() 
{
    int number = 10;
    int& refNumber = number;

    cout<<"Value of number: "<<number<<endl;
    cout<<"Value of refNumber: "<<refNumber<<endl;

    return 0;
}