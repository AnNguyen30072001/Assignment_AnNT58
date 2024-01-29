#include "main.h"

using namespace std;

int main() {
    EmployeeManager manager;

    Employee* new_employee = nullptr;

    bool exit = false;

    while(exit == false) {
        int input_command;
        int input_employee_type;
        string input_id;
        
        cout << "\n1. Add new employee\n";
        cout << "2. Modify employee by ID\n";
        cout << "3. Delete employee by ID\n";
        cout << "4. Search employees by type\n";
        cout << "5. Exit program\n";
        cout << "Input command: ";
        cin >> input_command;
        cin.ignore();
        switch(input_command) {
            case 1:
                cout << "1. Experience" << endl << "2. Fresher" << endl << "3. Intern" << endl;
                cout << "Input employee type: ";
                cin >> input_employee_type;
                cin.ignore();
                switch (input_employee_type) {
                case 1:
                    new_employee = new Experience();
                    manager.add(new_employee);
                    break;
                case 2:
                    new_employee = new Fresher();
                    manager.add(new_employee);
                    break;
                case 3:
                    new_employee = new Intern();
                    manager.add(new_employee);
                    break;
                default:
                    cout << "Invalid type!\n";
                    break;
                }
                break;
            case 2:
                cout << "Input ID to modify: ";
                getline(cin, input_id);
                manager.modifyByID(input_id);
                break;
            case 3:
                cout << "Input ID to delete: ";
                getline(cin, input_id);
                manager.deleteByID(input_id);
                break;
            case 4:
                cout << "1. Experience" << endl << "2. Fresher" << endl << "3. Intern" << endl;
                cout << "Input employee type: ";
                cin >> input_employee_type;
                // cin.ignore();
                manager.searchByType(input_employee_type);
                break;
            case 5:
                exit = true;
                break;
            default:
                cout << "Invalid command!\n";
                break;
        }
    }

    return 0;
}