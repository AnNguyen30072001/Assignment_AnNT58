#include "main.h"

using namespace std;

void Hotel::addPerson(Person person, int inputDaysRented, char inputRoomType) {
    personList.push_back(person);
    daysRented = inputDaysRented;
    roomType = inputRoomType;
    cout << "Done!\n";
}

// Delete by ID number
void Hotel::deletePerson(string idNum) {
    for (auto it = personList.begin(); it != personList.end(); ++it) {
        if (it->getIdNum() == idNum) {
            personList.erase(it);
            cout << "Done!\n";
            return;
        }
    }
        cout << "ID not found!\n";
}

// Calculate by ID num
double Hotel::calculateRent(string idNum) {
    double roomCost;
    switch (roomType) {
        case 'a':
            roomCost = 500;
            break;
        case 'b':
            roomCost = 300;
            break;
        case 'c':
            roomCost = 100;
            break;
        case 'A':
            roomCost = 500;
            break;
        case 'B':
            roomCost = 300;
            break;
        case 'C':
            roomCost = 100;
            break;
        default:
            cout << "Invalid room type" << endl;
            return 0;
    }

    for (const auto& person : personList) {
        if (person.getIdNum() == idNum) {
            return daysRented * roomCost;
        }
    }

    cout << "ID number not found!" << endl;
    return 0;
}