/*wap to demonstrate multiple inheritance*/
#include<iostream>
#include<string>
using namespace std;

class Shape 
{
        protected:
            string shapeType;

        public:
            Shape(const string& type) : shapeType(type) {}

            void draw() const 
            {
                cout<<"Drawing a "<<shapeType<<endl;
            }
};

class Color 
{
        protected:
            string colorName;

        public:
            Color(const string& name) : colorName(name) {}

            void setColor(const string& color) 
            {
                colorName = color;
            }

            void showColor() const 
            {
                cout<<"Color: "<<colorName<<endl;
            }
};


class ColoredShape : public Shape, public Color 
{
        public:
            ColoredShape(const string& shapeType, const string& colorName) : Shape(shapeType), Color(colorName) {}
};

int main() 
{
    ColoredShape coloredRectangle("Rectangle", "Red");

    coloredRectangle.draw();
    coloredRectangle.showColor();

    coloredRectangle.setColor("Blue");
    coloredRectangle.draw();
    coloredRectangle.showColor();

    return 0;
}