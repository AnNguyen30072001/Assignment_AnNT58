#ifndef A04B282E_D8A6_487C_8468_27385B5BD57C
#define A04B282E_D8A6_487C_8468_27385B5BD57C

#include "main.h"

using namespace std;

class Fresher : public Employee {
private:
    int graduate_date;
    string graduate_rank;
    string education;

public:
    Fresher();
    void showInfo();
    void modifyInfo();
};

#endif /* A04B282E_D8A6_487C_8468_27385B5BD57C */
