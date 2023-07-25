/*define the copy constructor*/
#include<iostream>
using namespace std;

class MyClass 
{
        private:
            int value;

        public:
            MyClass() : value(0) {}

            MyClass(int v) : value(v) {}

            MyClass(const MyClass& other) : value(other.value) 
            {
                cout<<"Copy constructor called."<<endl;
            }

            void display() const 
            {
                cout<<"Value: "<<value<<endl;
            }
};

int main() 
{
    MyClass obj1;
    obj1.display();

    MyClass obj2(42);
    obj2.display(); 

    MyClass obj3 = obj2;
    obj3.display(); 

    return 0;
}