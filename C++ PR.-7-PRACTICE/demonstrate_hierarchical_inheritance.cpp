/*wap to demonstrate hierarchical inheritance*/
#include<iostream>
#include<string>
using namespace std;

class Animal 
{
    protected:
        string species;

    public:
        Animal(const string& animal_species) : species(animal_species) {}

        virtual void makeSound() const 
        {
            cout<<"Unknown sound"<<endl;
        }
};

class Dog : public Animal 
{
    public:
        Dog() : Animal("Dog") {}

        void makeSound() const override 
        {
            cout<<"Woof! Woof!"<<endl;
        }

        void fetch() const 
        {
            cout<<"Fetching the ball!"<<endl;
        }
};

class Cat : public Animal 
{
    public:
        Cat() : Animal("Cat") {}

        void makeSound() const override 
        {
            cout<<"Meow!"<<endl;
        }

        void chaseMouse() const 
        {
            cout<<"Chasing the mouse!"<<endl;
        }
};

int main() 
{
    Dog dog;
    Cat cat;

    dog.makeSound();
    dog.fetch();

    cat.makeSound();
    cat.chaseMouse();

    return 0;
}