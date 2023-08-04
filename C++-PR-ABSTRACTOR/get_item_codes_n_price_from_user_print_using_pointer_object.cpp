/*WAP TO GET ITEM-CODE AND PRICE OF TWO ITEMS FROM USER AND PRINT IT USING POINTER OBJECT*/
#include<iostream>
#include<string>
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

    cout<<"Enter the item code for item 1: ";
    cin>>code1;

    cout<<"Enter the price for item 1: ";
    cin>>price1;

    cout<<"Enter the item code for item 2: ";
    cin>>code2;

    cout<<"Enter the price for item 2: ";
    cin>>price2;

    Item item1(code1, price1);
    Item item2(code2, price2);

    const Item* itemPtr1 = &item1;
    const Item* itemPtr2 = &item2;

    cout<<"Item 1: Code = "<<itemPtr1->getItemCode()<<", Price = "<<itemPtr1->getPrice()<<endl;
    cout<<"Item 2: Code = "<<itemPtr2->getItemCode()<<", Price = "<<itemPtr2->getPrice()<<endl;

    return 0;
}