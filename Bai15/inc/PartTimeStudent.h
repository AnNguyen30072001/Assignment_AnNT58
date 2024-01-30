#ifndef E6F2B391_A843_4C5D_8D6E_1169C3840F13
#define E6F2B391_A843_4C5D_8D6E_1169C3840F13

#include "main.h"

using namespace std;

class PartTimeStudent : public Student {
private:
    string trainingLocation;
public:
    PartTimeStudent() = default;

    PartTimeStudent(string id, string name, string dob, int year, float score, string location)
        : Student(id, name, dob, year, score), trainingLocation(location) {}

    PartTimeStudent(const PartTimeStudent& other);

    string getTrainingLocation();
};

#endif /* E6F2B391_A843_4C5D_8D6E_1169C3840F13 */
