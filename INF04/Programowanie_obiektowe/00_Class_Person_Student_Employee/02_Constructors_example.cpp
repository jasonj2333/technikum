#include<iostream>
using namespace std;

class Person {
protected:
    string Name;
    int Age;

public:
    Person(string name, int age){
        Name = name;
        Age = age;
    }

    void IntroduceYourself(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};

class Employee : public Person{
private:
    string Company;
public:
    Employee(string name, string company, int age) : Person(name, age){
        Company = company;
    }

    void IntroduceYourself(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};

class Student : public Person{
private:
    string School;
public:
    Student(string name, string school, int age) : Person(name, age){
        School = school;
    }

    void IntroduceYourself(){
        cout << "Name: " << Name << endl;
        cout << "School: " << School << endl;
        cout << "Age: " << Age << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Tomek", "IBM", 25);
    employee1.IntroduceYourself();

    Student student1 = Student("Iza", "ZSJP2", 17);
    student1.IntroduceYourself();

    Person person = Person("Władek", 42);
    person.IntroduceYourself();
    return 0;
}