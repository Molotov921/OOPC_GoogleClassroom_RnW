/*wap to using single inheritance get value of height and width in base class and multiple them in derived class*/
#include<iostream>
using namespace std;

class Rectangle 
{
    protected:
        int height;
        int width;

    public:
        void setDimensions(int h, int w) 
        {
            height = h;
            width = w;
        }
};

class AreaCalculator : public Rectangle 
{
    public:
        int calculateArea() 
        {
            return height * width;
        }
};

int main() 
{
    AreaCalculator rectangle;

    int h, w;
    cout<<"Enter the height and width of the rectangle: ";
    cin>>h>>w;

    rectangle.setDimensions(h, w);
    int area = rectangle.calculateArea();

    cout<<"Area of the rectangle: "<<area<<endl;

    return 0;
}