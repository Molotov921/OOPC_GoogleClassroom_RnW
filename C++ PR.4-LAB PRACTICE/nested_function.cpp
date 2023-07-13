/*WAP TO PERFORM NESTED FUNCTION*/
#include <iostream>
using namespace std;
class OuterClass 
{
    private:
        void innerNestedFunction() 
        {
            cout<<"Inner nested function"<<endl;
        }
    public:
        void outerFunction() 
        {
            cout<<"Outer function"<<endl;

        auto innerFunction = [this]() 
        {
            cout<<"Inner function"<<endl;
            innerNestedFunction();
        };

        innerFunction();
    }
};

int main() 
{
    OuterClass obj;
    obj.outerFunction();

    return 0;
}