#ifndef C43288F2_948E_46BE_9807_B8DA273BF45C
#define C43288F2_948E_46BE_9807_B8DA273BF45C

#include "main.h"
#include "person.h"

using namespace std;

// Manage hotelManager booking
class Hotel {
protected:
    vector<Person> personList;
    int daysRented; 
    char roomType;

public:
    // Add new person info
    void addPerson(Person person, int inputDaysRented, char inputRoomType);

    // Delete by ID number
    void deletePerson(string idNum);

    // Calculate by ID num
    double calculateRent(string idNum); 
};

#endif /* C43288F2_948E_46BE_9807_B8DA273BF45C */
