#ifndef AAF5C842_9EF3_439A_A563_BCE887D1F0F7
#define AAF5C842_9EF3_439A_A563_BCE887D1F0F7

#include "main.h"

using namespace std;

class Experience : public Employee {
private:
    int expInYear;
    string proSkill;

public:
    Experience();
    void showInfo();
    void modifyInfo();
};

#endif /* AAF5C842_9EF3_439A_A563_BCE887D1F0F7 */
