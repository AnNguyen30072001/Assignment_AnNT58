#include "main.h"

using namespace std;

Fresher::Fresher() : Employee() {
    employee_type = "Fresher";
    cout << "Graduation date: ";
    cin >> graduate_date;
    cout << "Graduation rank: ";
    cin.ignore();
    getline(cin, graduate_rank);
    cout << "Education: ";
    getline(cin, education);
}

void Fresher::showInfo() {
    cout << endl << employee_type << " employee - " << name << ":\n";
    cout << "ID: " << ID << " - ";
    cout << "Birthday: " << birthDay << " - ";
    cout << "Phone number: " << phone << " - ";
    cout << "Email: " << email << "\n - ";
    cout << "Graduation date: " << graduate_date << " - ";
    cout << "Graduation rank: " << graduate_rank << endl;
}

void Fresher::modifyInfo() {
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
    cout << "Graduation date: ";
    cin >> graduate_date;
    cout << "Graduation rank: ";
    cin.ignore();
    getline(cin, graduate_rank);
    cout << "Education: ";
    getline(cin, education);
}