#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    Student(string n, int a, string dept, string crs) : name(n), age(a), department(dept), course(crs) {}

    friend void displayStudentDetails(const Student& student);
};

void displayStudentDetails(const Student& student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    string name, department, course;
    int age;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); 
    cout << "Enter department: ";
    getline(cin, department);
    cout << "Enter course: ";
    getline(cin, course);

    Student student(name, age, department, course);
    displayStudentDetails(student);

    return 0;
}
