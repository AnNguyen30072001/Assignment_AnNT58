#include "main.h"

using namespace std;

void EmployeeManager::add(Employee* employee) {
    employeeList.push_back(employee);
    cout << "Add done!\n";
}

void EmployeeManager::modifyByID(string inputID) {
    string temp;
    for(const auto& employee : employeeList) {
        temp = employee->getID();
        if(temp == inputID) {
            employee->modifyInfo();
            return;
        }
    }
    cout << "ID not found!\n";
}

void EmployeeManager::deleteByID(string inputID) {
    string temp;
    auto it = find_if(employeeList.begin(), employeeList.end(),
                           [inputID](const auto& employee) {
                                return employee->getID() == inputID;
                           });

    if (it != employeeList.end()) {
        employeeList.erase(it);
        cout << "Employee with ID " << inputID << " erased successfully." << endl;
    } else {
        cout << "ID not found: " << inputID << endl;
    }
}

void EmployeeManager::searchByType(int inputType) {
    string temp;
    switch(inputType) {
        case 1:
            for(auto const& employee : employeeList) {
                temp = employee->getEmployeeType();
                if(temp == "Experience") {
                    employee->showInfo();
                }
            }
            break;
        case 2:
            for(auto const& employee : employeeList) {
                temp = employee->getEmployeeType();
                if(temp == "Fresher") {
                    employee->showInfo();
                }
            }
            break;
        case 3:
            for(auto const& employee : employeeList) {
                temp = employee->getEmployeeType();
                if(temp == "Intern") {
                    employee->showInfo();
                }
            }
            break;
        default:
            cout << "Invalid!\n";
            break;
    }
}