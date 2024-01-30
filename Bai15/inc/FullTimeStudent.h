#ifndef DFDEC82D_2558_4410_BAB5_C735928A37AD
#define DFDEC82D_2558_4410_BAB5_C735928A37AD

#include "main.h"

using namespace std;

class FullTimeStudent : public Student {
public:
    FullTimeStudent() = default;

    FullTimeStudent(string id, string name, string dob, int year, float score);
};

#endif /* DFDEC82D_2558_4410_BAB5_C735928A37AD */
