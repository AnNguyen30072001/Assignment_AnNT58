#include "main.h"

using namespace std;

int Employee::employee_count = 0;

Employee::Employee() {
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
    Employee::employee_count++;
}

void Employee::addCertificate(Certificate cert) {
    certList.push_back(cert);
}

string Employee::getID() {
    return ID;
}

string Employee::getEmployeeType() {
    return employee_type;
}