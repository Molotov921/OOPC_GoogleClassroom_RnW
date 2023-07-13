/*WAP TO FIND LARGEST NUMBER USING SIMPLE CLASS EXAMPLE*/
#include<iostream>
using namespace std;

class NumberFinder 
{
public:
    int findLargest(int num1, int num2, int num3) 
    {
        int largest = num1;
        
        if (num2 > largest) 
        {
            largest = num2;
        }
        
        if (num3 > largest) 
        {
            largest = num3;
        }
        
        return largest;
    }
};

int main() 
{
    int num1, num2, num3;
    
    cout<<"Enter the first number: ";
    cin>>num1;
    
    cout<<"Enter the second number: ";
    cin>>num2;
    
    cout<<"Enter the third number: ";
    cin>>num3;
    
    NumberFinder nf;
    int largestNumber = nf.findLargest(num1, num2, num3);
    
    cout<<"The largest number is: "<<largestNumber<<endl;
    
    return 0;
}