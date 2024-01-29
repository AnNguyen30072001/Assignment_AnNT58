#ifndef C99B6326_AC52_48D7_BCC7_899BF8738B4F
#define C99B6326_AC52_48D7_BCC7_899BF8738B4F

#include "main.h"

using namespace std;

// Manage information of a person
class Person {
private:
    string name;
    int age;
    string idNum;

public:
    Person(string name, int age, string idNum)
        : name(name), age(age), idNum(idNum) {}

    // Getter ID number
    string getIdNum() const;
};

#endif /* C99B6326_AC52_48D7_BCC7_899BF8738B4F */
