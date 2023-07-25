/*wap to count how many time hello world printed using called multiple object with static member and static function*/
#include<iostream>
using namespace std;
class HelloWorldPrinter 
{
private:
    static int count;

public:
    static void printHelloWorld() 
    {
        cout<<"Hello, World!\n";
        count++;
    }

    static int getCount() 
    {
        return count;
    }
};
int HelloWorldPrinter::count = 0;

int main() 
{
    HelloWorldPrinter obj1, obj2, obj3;

    obj1.printHelloWorld();
    obj2.printHelloWorld();
    obj3.printHelloWorld();

    cout<<"Number of times 'Hello, World!' printed: "<<HelloWorldPrinter::getCount()<<'\n';

    return 0;
}