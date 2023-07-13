/*WAP TO USE THIS KEYWORD*/
#include<iostream>
using namespace std;

class Rectangle 
{
    private:
        int length;
        int width;

    public:
        Rectangle(int length, int width) 
        {
            this->length = length;
            this->width = width;
        }

        int calculateArea() 
        {
            return this->length * this->width;
        }

        void displayDimensions() 
        {
            cout<<"Length: "<<this->length<<endl;
            cout<<"Width: "<<this->width<<endl;
        }
};

int main() 
{
    Rectangle rectangle(5, 3);

    cout<<"Area: "<<rectangle.calculateArea()<<endl;
    rectangle.displayDimensions();

    return 0;
}