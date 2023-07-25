/*wap program to demonstrate multilevel inheritance*/
#include<iostream>
#include<string>
using namespace std;

class Animal 
{
        public:
            string species;

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

class Labrador : public Dog 
{
        public:
            Labrador() {}

            void makeSound() const override 
            {
                cout<<"Labrador says: Woof! Woof!"<<endl;
            }

            void guard() const 
            {
                cout<<"Guarding the house!"<<endl;
            }
};

int main() 
{
    Labrador labrador;

    cout<<"Labrador's Species: "<<labrador.species<<endl;
    labrador.makeSound();
    labrador.fetch();
    labrador.guard();

    return 0;
}