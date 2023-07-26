/*Wap to demonstrate method overriding*/
#include<iostream>
using namespace std;

class Animal 
{
    public:
        virtual void makeSound() 
        {
            cout << "Generic animal sound!" << endl;
        }
};

class Dog : public Animal 
{
    public:
        void makeSound() override 
        {
            cout << "Woof! Woof!" << endl;
        }
};

class Cat : public Animal 
{
    public:
        void makeSound() override 
        {
            cout << "Meow! Meow!" << endl;
        }
};

int main() 
{
    Animal* animal1 = new Animal();
    Animal* animal2 = new Dog();
    Animal* animal3 = new Cat();

    animal1->makeSound();
    animal2->makeSound();
    animal3->makeSound();

    delete animal1;
    delete animal2;
    delete animal3;

    return 0;
}