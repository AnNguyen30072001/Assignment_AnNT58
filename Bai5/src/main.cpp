#include "main.h"

using namespace std;

int main() {
    Hotel hotelManager;
    bool isExit = false;
    while(isExit == false) {
        int userCommand;
        string inputName;
        int inputAge;
        string inputID;
        int inputDaysRent;
        char inputRoomType;
        double cost;
        cout << "1. Add Person\n";
        cout << "2. Delete Person by ID\n";
        cout << "3. Calculate Rent by ID\n";
        cout << "4. Exit program\n";
        cout << "Input command: ";
        cin >> userCommand;
        cin.ignore();
        switch(userCommand) {
            case 1:
                cout << "Name: ";
                getline(cin, inputName);
                cout << "Age: ";
                cin >> inputAge;
                cin.ignore();
                cout << "ID number: ";
                getline(cin, inputID); 
                cout << "Days rent: ";
                cin >> inputDaysRent;
                cout << "Room type: ";
                cin >> inputRoomType;
                cin.ignore();
                hotelManager.addPerson(Person(inputName, inputAge, inputID), inputDaysRent, inputRoomType);
                break;
            case 2:
                cout << "ID: ";
                getline(cin, inputID); 
                hotelManager.deletePerson(inputID);
                break;
            case 3:
                cout << "ID: ";
                getline(cin, inputID); 
                cost = hotelManager.calculateRent(inputID);
                cout << "Rent cost: $" << cost << endl;
                break;
            case 4:
                isExit = true;
                break;
            default:
                cout << "Invalid command!\n";
        }
    }

    return 0;
}
