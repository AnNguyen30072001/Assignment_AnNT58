#include "main.h"

using namespace std;

Experience::Experience() : Employee() {
    employee_type = "Experience";
    cout << "Years of experience: ";
    cin >> expInYear;
    cout << "Pro skill: ";
    cin.ignore();
    getline(cin, proSkill);
}

void Experience::showInfo() {
    cout << endl << employee_type << " employee - " << name << ":\n";
    cout << "ID: " << ID << " - ";
    cout << "Birthday: " << birthDay << " - ";
    cout << "Phone number: " << phone << " - ";
    cout << "Email: " << email << "\n - ";
    cout << "Years of exp: " << expInYear << " - ";
    cout << "Pro skill: " << proSkill << endl;
}

void Experience::modifyInfo() {
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
    cout << "Years of experience: ";
    cin >> expInYear;
    cout << "Pro skill: ";
    cin.ignore();
    getline(cin, proSkill);
}