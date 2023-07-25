/*WAP TO SWAP TWO VALUE USING FRINED FUNCTION*/
#include<iostream>
using namespace std;

class Swapper 
{
    private:
        int value1;
        int value2;

    public:
        Swapper(int val1, int val2) : value1(val1), value2(val2){}

    void swapValues()
    {
        int temp = value1;
        value1 = value2;
        value2 = temp;
    }

    void displayValues()const 
    {
        cout<<"Value 1: "<<value1<<endl;
        cout<<"Value 2: "<<value2<<endl;
    }

    void swapAndDisplay() 
    {
        cout<<"Before swapping:\n";
        displayValues();

        swapValues();

        cout<<"After swapping:\n";
        displayValues();
    }
};

int main() 
{
    Swapper swapperObj(10, 20);
    swapperObj.swapAndDisplay();
    return 0;
}