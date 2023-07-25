/*wap to get 3 emp data using object-array*/
#include<iostream>
#include<string>
using namespace std;

class Employee 
{
private:
    string name;
    int age;
    double salary;

public:
    void setName(const string& empName){ name = empName;}
    void setAge(int empAge){age = empAge;}
    void setSalary(double empSalary){salary = empSalary;}

    const string& getName() const{return name;}
    int getAge() const{return age;}
    double getSalary() const{return salary;}
};

int main() 
{
    const int numEmp = 3;
    Employee empList[numEmp];

    for(int i = 0; i < numEmp; ++i) 
    {
        string empName;
        int empAge;
        double empSalary;

        cout<<"Enter details for Employee "<<i + 1<<":\n";
        cout<<"Name: ";
        getline(cin>>ws,empName); 

        cout<<"Age: ";
        cin>>empAge;

        cout<<"Salary: ";
        cin>>empSalary;
        cin.ignore(); 

        empList[i].setName(empName);
        empList[i].setAge(empAge);
        empList[i].setSalary(empSalary);

        cout << endl;
    }

    cout<<"Employee data:\n";
    for(int i = 0; i < numEmp; ++i) 
    {
        cout<<"Employee "<<i + 1<<":\n";
        cout<<"Name: "<<empList[i].getName()<<"\n";
        cout<<"Age: "<<empList[i].getAge()<<"\n";
        cout<<"Salary: "<<empList[i].getSalary()<<"\n\n";
    }
    return 0;
}