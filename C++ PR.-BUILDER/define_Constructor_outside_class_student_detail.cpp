/*defining the constructor outside the class and print student details like name,roll_no,course_name,fees*/
#include<iostream>
#include<string>
using namespace std;

class Student 
{
        private:
            string name;
            int roll_no;
            string course_name;
            double fees;

        public:

            Student(string student_name, int student_roll_no, string student_course_name, double student_fees);

            void printDetails();
};

Student::Student(string student_name, int student_roll_no, string student_course_name, double student_fees) 
{
    name = student_name;
    roll_no = student_roll_no;
    course_name = student_course_name;
    fees = student_fees;
}

void Student::printDetails() 
{
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll Number: "<<roll_no<<endl;
    cout<<"Course Name: "<<course_name<<endl;
    cout<<"Fees: $"<<fees<<endl;
}

int main() 
{

    Student student1("Neel Kalariya", 47, "Computer Engineering", 1038.23);

    student1.printDetails();

    return 0;
}