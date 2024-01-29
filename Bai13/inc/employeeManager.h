#ifndef EAD47E5E_D5EB_4BB7_AD99_3E5014D6D9E4
#define EAD47E5E_D5EB_4BB7_AD99_3E5014D6D9E4

#include "main.h"

using namespace std;

class EmployeeManager {
private:
    vector<Employee*> employeeList;

public:
    void add(Employee*);

    void modifyByID(string);

    void deleteByID(string);

    void searchByType(int);
};

#endif /* EAD47E5E_D5EB_4BB7_AD99_3E5014D6D9E4 */
