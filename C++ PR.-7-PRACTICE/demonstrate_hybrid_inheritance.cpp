/*wap to demonstrate hybrid inheritance*/
#include<iostream>
#include<string>
using namespace std;

class Person 
{
        protected:
            string name;

        public:
            Person(const string& person_name) : name(person_name) {}

            void introduce() const 
            {
                cout<<"Hello, my name is "<<name<<endl;
            }
};

class Employee 
{
        protected:
            string position;

        public:
            Employee(const string& employee_position) : position(employee_position) {}

            void showPosition() const 
            {
                cout<<"Position: "<<position<<endl;
            }
};

class Student : virtual public Person 
{
        protected:
            int studentID;

        public:
            Student(const string& student_name, int id) : Person(student_name), studentID(id) {}

        void showStudentID() const 
        {
            cout<<"Student ID: "<<studentID<<endl;
        }
};

class Teacher : virtual public Employee 
{
        protected:
            string subject;

        public:
            Teacher(const string& teacher_position, const string& teacher_subject) : Employee(teacher_position), subject(teacher_subject) {}

        void teach() const 
        {
            cout<<"Teaching "<<subject<<" subject"<<endl;
        }
};

class TA : public Student, public Teacher 
{
        public:
            TA(const string& name, int studentID, const string& position, const string& subject) : Person(name), Student(name, studentID), Employee(position), Teacher(position, subject) {}
};

int main() 
{
    TA teachingAssistant("Rupesh Rajput", 101, "Teaching Assistant", "Computer Science");

    teachingAssistant.introduce(); 
    teachingAssistant.showStudentID();
    teachingAssistant.showPosition(); 
    teachingAssistant.teach();

    return 0;
}