#include<iostream>
using namespace std;

int main() 
{
    int a = 5;
    int b = 10;

    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

    int temp = a;
    a = b;
    b = temp;

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}