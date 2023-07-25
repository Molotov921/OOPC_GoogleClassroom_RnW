/*wap to print inner variable outside the scope with scope resolution operator*/
#include<iostream>
using namespace std;
class Outer 
{
        private:
        int outerVar;

        public:
        void setOuterVar(int value) 
        {
            outerVar = value;
        }

        void printOuterVar() 
        {
            cout<<"Outer Variable: "<<outerVar<<endl;
        }

class Inner 
{
        private:
            int innerVar;

        public:
            void setInnerVar(int value) 
        {
            innerVar = value;
        }

        int getInnerVar()const 
        {
            return innerVar;
        }
    };
};

int main() 
{
    Outer::Inner innerObj;
    innerObj.setInnerVar(42);

    Outer::Inner anotherInnerObj;
    anotherInnerObj.setInnerVar(99);

    cout<<"Inner Variable (1): "<<innerObj.getInnerVar()<<endl;
    cout<<"Inner Variable (2): "<<anotherInnerObj.getInnerVar()<<endl;
    return 0;
}