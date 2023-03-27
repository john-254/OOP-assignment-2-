#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string emp_id;
        string first_name;
        string second_name;
        string surname;
        string gender;
        string dob;
        float salary;

    public:
        Employee() {
            cout << "Enter Employee ID: ";
            getline(cin, emp_id);
            cout << "Enter First Name: ";
            getline(cin, first_name);
            cout << "Enter Second Name: ";
            getline(cin, second_name);
            cout << "Enter Surname: ";
            getline(cin, surname);
            cout << "Enter Gender: ";
            getline(cin, gender);
            cout << "Enter Date of Birth (dd-mm-yyyy): ";
            getline(cin, dob);
            cout << "Enter Monthly Basic Salary: ";
            cin >> salary;
        }

        void show_employee() {
            cout << "Employee ID: " << emp_id << endl;
            cout << "First Name: " << first_name << endl;
            cout << "Second Name: " << second_name << endl;
            cout << "Surname: " << surname << endl;
            cout << "Gender: " << gender << endl;
            cout << "Date of Birth: " << dob << endl;
            cout << "Monthly Basic Salary: " << salary << endl;
        }

        friend float compute_pension(Employee emp);
};

float compute_pension(Employee emp) {
    float pension = emp.salary * 0.05;
    return pension;
}

int main() {
    Employee emp_obj;
    emp_obj.show_employee();
    float pension = compute_pension(emp_obj);
    cout << "Pension Contribution: " << pension << endl;
    return 0;
}
