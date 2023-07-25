/*wap to program to show inheritance ambiguity*/
#include<iostream>
using namespace std;

class Animal 
{
    public:
        virtual void makeSound() const 
        {
            cout<<"Unknown sound"<<endl;
        }
};

class Dog : public Animal 
{
    public:
        void makeSound() const override 
        {
            cout<<"Woof! Woof!"<<endl;
        }
};

class Cat : public Animal 
{
    public:
        void makeSound() const override 
        {
            cout<<"Meow!"<<endl;
        }
};


class HybridAnimal : public Dog, public Cat 
{
    public:
        using Dog::makeSound;
        using Cat::makeSound;
};

int main()
{
    HybridAnimal hybridAnimal;

    hybridAnimal.Dog::makeSound();
    hybridAnimal.Cat::makeSound();

    return 0;
}