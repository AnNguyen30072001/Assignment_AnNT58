#ifndef AA8276DC_4AB9_4F84_994C_1C7BE761AACE
#define AA8276DC_4AB9_4F84_994C_1C7BE761AACE

#include "main.h"

using namespace std;

class Intern : public Employee {
private:
    string major;
    string semester;
    string university_name;

public:
    Intern();
    void showInfo();
    void modifyInfo();
};

#endif /* AA8276DC_4AB9_4F84_994C_1C7BE761AACE */
