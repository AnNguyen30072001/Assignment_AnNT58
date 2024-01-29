#include "main.h"

using namespace std;

Intern::Intern() : Employee() {
    employee_type = "Intern";
    cout << "Major: ";
    getline(cin, major);
    cout << "Semester: ";
    getline(cin, semester);
    cout << "University name: ";
    getline(cin, university_name);
}

void Intern::showInfo() {
    cout << endl << employee_type << " employee - " << name << ":\n";
    cout << "ID: " << ID << " - ";
    cout << "Birthday: " << birthDay << " - ";
    cout << "Phone number: " << phone << " - ";
    cout << "Email: " << email << "\n - ";
    cout << "Major: " << major << " - ";
    cout << "Semester: " << semester << " - ";
    cout << "University name: " << university_name << endl;
}

void Intern::modifyInfo() {
    cout << "\nID: ";
    getline(cin, ID);
    cout << "Name: ";
    getline(cin, name);
    cout << "Birthday: ";
    getline(cin, birthDay);
    cout << "Phone number: ";
    getline(cin, phone);
    cout << "Email: ";
    getline(cin, email);
    cout << "Major: ";
    getline(cin, major);
    cout << "Semester: ";
    getline(cin, semester);
    cout << "University name: ";
    getline(cin, university_name);
}