/*WAP TO PERFROM GETTER AND SETTER*/
#include<iostream>
using namespace std;

class Person 
{
    private:
        string name;
        int age;

    public:
        string getName() 
        {
            return name;
        }

    void setName(string newName) 
        {
            name = newName;
        }

    int getAge() 
        {
            return age;
        }

    void setAge(int newAge) 
        {
            if(newAge >= 0) 
            {
                age = newAge;
            } 
            else 
            {
                cout<<"Invalid age. Age must be a non-negative value."<<endl;
            }
        }
};

int main() 
{
    Person person;

    person.setName("Neel Kalariya");
    person.setAge(20);

    cout<<"Name: "<<person.getName()<<endl;
    cout<<"Age: "<<person.getAge()<<endl;

    return 0;
}