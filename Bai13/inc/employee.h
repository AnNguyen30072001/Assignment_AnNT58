#ifndef E8709455_AA8A_4C77_8D3C_B1E75612C107
#define E8709455_AA8A_4C77_8D3C_B1E75612C107

#include "main.h"

using namespace std;

class Employee {
protected:
    vector<Certificate> certList;
    string ID;
    string name;
    string birthDay;
    string phone;
    string email;
    string employee_type;

public:
    static int employee_count;

    Employee();
    void addCertificate(Certificate);
    string getID();
    string getEmployeeType();

    virtual void showInfo() = 0;
    virtual void modifyInfo() = 0;
};

#endif /* E8709455_AA8A_4C77_8D3C_B1E75612C107 */
