/*Write a program to demonstrate the use of exception handling*/
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class Item 
{
    private:
        string itemCode;
        double price;

    public:
        Item(const string& code, double p) : itemCode(code), price(p){}

        const string& getItemCode() const 
        {
            return itemCode;
        }

        double getPrice() const 
        {
            return price;
        }
};

int main() 
{
    string code1, code2;
    double price1, price2;

    try 
    {
        cout<<"Enter the item code for item 1: ";
        cin>>code1;

        cout<<"Enter the price for item 1: ";
        cin>>price1;

        if (cin.fail()) 
        {
            throw runtime_error("Invalid input. Price should be a numeric value.");
        }

        cout<<"Enter the item code for item 2: ";
        cin>>code2;

        cout<<"Enter the price for item 2: ";
        cin>>price2;

        if (cin.fail()) 
        {
            throw runtime_error("Invalid input. Price should be a numeric value.");
        }
    }
    catch (const exception& e) 
    {
        cout<<"Exception occurred: "<<e.what()<<endl;
        return 1;
    }

    Item item1(code1, price1);
    Item item2(code2, price2);

    cout<<"Item 1: Code = "<<item1.getItemCode()<<", Price = "<<item1.getPrice()<<endl;
    cout<<"Item 2: Code = "<<item2.getItemCode()<<", Price = "<<item2.getPrice()<<endl;

    return 0;
}