#include<iostream>
using namespace std;

class Person {
    protected:
        string firstname;
        string lastname;
        int age;
    public:
        Person(string name,string lastname, int age) {
            name = name;
            lastname = lastname;
            age = age;

        }
};
// class student inherits class person and adds reg no, institution and year
class Student : public Person {
    private:
        string institution;
        int year;
        string RegNo;
    public:
        Student(string name,string lastname, int age, string institution, int year, string RegNo) : Person(name,lastname, age) {
            institution = institution;
            year = year;
            RegNo = RegNo;
        }
};
