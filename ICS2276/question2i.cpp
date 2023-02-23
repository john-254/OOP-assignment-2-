#include<iostream>
using namespace std;
class Person {
  private:
    int age;
    string firstName;
    string lastName;

  public:
      // constructor to initialize all member data
    Person(int _age, string _firstName, string _lastName) {
      age = _age;
      firstName = _firstName;
      lastName = _lastName;
    }
         //member set values
    void setValues(int _age, string _firstName, string _lastName) {
      age = _age;
      firstName = _firstName;
      lastName = _lastName;
    }
      // member get values
    void getValues() {
      cout << "Age: " << age << endl;
      cout << "First Name: " << firstName << endl;
      cout << "Last Name: " << lastName << endl;
    }
};
int main (){
    Person p(30, "John", "Murphy");
    p.getValues(); // Output: Age: 30 \n First Name: John \n Last Name: Murphy
    p.setValues(35, "Virgil", "Matip");
    p.getValues(); // Output: Age: 35 \n First Name: Virgil \n Last Name: Matip
    return 0;
}
