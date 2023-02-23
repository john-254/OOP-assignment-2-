#include <iostream>
using namespace std;

// Defining base class Student
class Student {
public:
    string name;
    string email;
    int id;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "ID: " << id << endl;
    }
};

// Defining subclasses for different courses
class ICTStudent : public Student {
public:
    string courseCode = "ICT";
    int level;

    void display() {
        Student::display();
        cout << "Course Code: " << courseCode << endl;
        cout << "Level: " << level << endl;
    }
};

class LawStudent : public Student {
public:
    string courseCode = "Law";
    int year;

    void display() {
        Student::display();
        cout << "Course Code: " << courseCode << endl;
        cout << "Year: " << year << endl;
    }
};

class BusinessStudent : public Student {
public:
    string courseCode = "Business";
    int semester;

    void display() {
        Student::display();
        cout << "Course Code: " << courseCode << endl;
        cout << "Semester: " << semester << endl;
    }
};

// Define base class Course
class Course {
public:
    string code;
    string title;
    int duration;

    void display() {
        cout << "Course Code: " << code << endl;
        cout << "Title: " << title << endl;
        cout << "Duration: " << duration << endl;
    }
};

// Define subclasses for different stages of BSC-IT degree
class BSCITStage1 : public Course {
public:
    int level = 1;

    void display() {
        Course::display();
        cout << "Level: " << level << endl;
    }
};

class BSCITStage2 : public Course {
public:
    int level = 2;

    void display() {
        Course::display();
        cout << "Level: " << level << endl;
    }
};

class BSCITStage3 : public Course {
public:
    int level = 3;

    void display() {
        Course::display();
        cout << "Level: " << level << endl;
    }
};

int main() {
    // Create some example objects
    ICTStudent ictStudent;
    ictStudent.name = "John karanja";
    ictStudent.email = "johnkaranja@gmail.com";
    ictStudent.id = 34486039;
    ictStudent.level = 2;
    LawStudent lawStudent;
    lawStudent.name = "Jane Walcott";
    lawStudent.email = "janewalcott@gmail.com";
    lawStudent.id = 789012;
    lawStudent.year = 2;

    BSCITStage1 stage1;
    stage1.code = "BSCIT101";
    stage1.title = "Introduction to Programming";
    stage1.duration = 12;

    BSCITStage3 stage3;
    stage3.code = "BSCIT303";
    stage3.title = "Advanced Database Systems";
    stage3.duration = 18;
    // Display the details of the objects
    cout << "ICT Student:" << endl;
    ictStudent.display();
    cout << endl;
    cout << "Law Student:" << endl;
    lawStudent.display();
    cout << endl;
    cout << "BSC-IT Stage 1 Course:" << endl;
    stage1.display();
    cout << endl;
    cout << "BSC-IT: ”<<endl;
}
