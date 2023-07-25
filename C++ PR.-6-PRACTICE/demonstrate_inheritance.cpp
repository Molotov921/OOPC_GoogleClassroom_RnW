/*wap program to demonstrate inheritance*/
#include<iostream>
#include<string>
using namespace std;

class Animal 
{
        public:
            void makeSound() const 
            {
                cout<<"Unknown sound"<<endl;
            }
};

class Dog : public Animal 
{
        public:
            void makeSound() const 
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
            void makeSound() const 
            {
                cout<<"Meow!"<<endl;
            }

           void jump() const 
            {
                cout<<"Jumping to catch a bird!"<<endl;
            }
};

int main() 
{
    Dog dog;
    Cat cat;

    cout<<"Dog: ";
    dog.makeSound();
    dog.fetch();
    cout<<endl;

    cout<<"Cat: ";
    cat.makeSound();
    cat.jump();
    cout<<endl;

    return 0;
}